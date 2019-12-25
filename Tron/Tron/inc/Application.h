#pragma once

#include "Core.h"

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

