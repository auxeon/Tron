workspace "Tron"
    architecture "x64"

    configurations{
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Tron"
    location "Tron"
    kind "SharedLib"
    language "C++"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("bin-int/" .. outputdir .. "/%{prj.name}")

    pchheader "tronpch.h"
    pchsource "Tron/src/tronpch.cpp"

    files{
        "%{prj.name}/inc/**.h",
        "%{prj.name}/src/**.cpp",
        "%{prj.name}/**.h"
    }
    includedirs{
        "Tron/libs/spdlog/include",
        "Tron/inc"
    }
    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines{
            "TRON_PLATFORM_WINDOWS",
            "TRON_BUILD_DLL"
        }
        postbuildcommands{
            ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
        }
    filter "configurations:Debug"
        defines "TRON_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "TRON_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "TRON_DIST"
        optimize "On"

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("bin-int/" .. outputdir .. "/%{prj.name}")

    files{
        "%{prj.name}/inc/**.h",
        "%{prj.name}/src/**.cpp"
    }

    links{
        "Tron"
    }

    includedirs{
        "Sandbox/inc",
        "Tron/libs/spdlog/include",
        "Tron/inc",
        "Tron"
    }
    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines{
            "TRON_PLATFORM_WINDOWS",
        }

    filter "configurations:Debug"
        defines "TRON_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "TRON_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "TRON_DIST"
        optimize "On"

