#pragma once

#include "Core.h"

namespace Pyrex {

	class PX_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in client
	Application* CreateApplication();

}
