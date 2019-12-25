#pragma once
// std
#include <iostream>
#ifdef TRON_PLATFORM_WINDOWS

extern Tron::Application* Tron::CreateApplication();

int main(int argc, char** argv) {
	std::cout << "Tron Engine Loaded\n";
	auto app = Tron::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // TRON_PLATFORM_WINDOWS
