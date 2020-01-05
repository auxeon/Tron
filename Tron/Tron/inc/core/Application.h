#pragma once
#include "tronpch.h"
#include "core/Core.h"
#include "core/Window.h"
#include "events/ApplicationEvent.h"

namespace Tron {
	class TRON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		void OnEvent(Event& e);
	private:
		bool onWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// to be defined in CLIENT
	Application* CreateApplication();
}

