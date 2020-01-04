#include "tronpch.h"
#include "core/Application.h"
#include "events/ApplicationEvent.h"
#include "core/Log.h"

namespace Tron {
	Application::Application() {

	}
	Application::~Application() {

	}
	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			TRON_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			TRON_TRACE(e);
		}

	}

}