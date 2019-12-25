#pragma once

#ifdef TRON_PLATFORM_WINDOWS

extern Tron::Application* Tron::CreateApplication();

int main(int argc, char** argv) {
	Tron::Log::logInit();
	TRON_CORE_WARN("Tron Engine Loaded...");
	TRON_CORE_INFO("Client Process starting...");

	auto app = Tron::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // TRON_PLATFORM_WINDOWS
