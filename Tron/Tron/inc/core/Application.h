#pragma once
#include "tronpch.h"
#include "core/Core.h"

namespace Tron {
	class TRON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in CLIENT
	Application* CreateApplication();
}

