#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Tron {

	std::shared_ptr<spdlog::logger> Log::logCoreLogger;
	std::shared_ptr<spdlog::logger> Log::logClientLogger;

	void Log::logInit() {

		spdlog::set_pattern("%^%L [%n %Y-%m-%d %T.%f] : %v%$");

		logCoreLogger = spdlog::stdout_color_mt("TRON");
		logCoreLogger->set_level(spdlog::level::trace);

		logClientLogger = spdlog::stdout_color_mt("APPX");
		logClientLogger->set_level(spdlog::level::trace);
	}
}