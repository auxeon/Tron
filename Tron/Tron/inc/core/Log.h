#pragma once
#include "tronpch.h"
// helpers
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Tron {

	class TRON_API Log
	{
	public:
		static void logInit();
		inline static std::shared_ptr<spdlog::logger>& logGetCoreLogger() { return logCoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& logGetClientLogger() { return logClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> logCoreLogger;
		static std::shared_ptr<spdlog::logger> logClientLogger;
	};
}

// core logger macros
#define TRON_CORE_TRACE(...)   ::Tron::Log::logGetCoreLogger()->trace(__VA_ARGS__);
#define TRON_CORE_INFO(...)    ::Tron::Log::logGetCoreLogger()->info(__VA_ARGS__);
#define TRON_CORE_WARN(...)    ::Tron::Log::logGetCoreLogger()->warn(__VA_ARGS__);
#define TRON_CORE_ERROR(...)   ::Tron::Log::logGetCoreLogger()->error(__VA_ARGS__);
#define TRON_CORE_FATAL(...)   ::Tron::Log::logGetCoreLogger()->fatal(__VA_ARGS__);

 
// client logger macros
#define TRON_TRACE(...)        ::Tron::Log::logGetClientLogger()->trace(__VA_ARGS__);
#define TRON_INFO(...)         ::Tron::Log::logGetClientLogger()->info(__VA_ARGS__);
#define TRON_WARN(...)         ::Tron::Log::logGetClientLogger()->warn(__VA_ARGS__);
#define TRON_ERROR(...)        ::Tron::Log::logGetClientLogger()->error(__VA_ARGS__);
#define TRON_FATAL(...)        ::Tron::Log::logGetClientLogger()->fatal(__VA_ARGS__);
