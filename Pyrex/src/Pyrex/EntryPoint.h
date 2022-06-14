#pragma once

#ifdef PX_PLATFORM_WINDOWS

extern Pyrex::Application* Pyrex::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Pyrex::CreateApplication();
	app->Run();

	delete app;
}

#else
	#error Pyrex is only supported on Windows (atm).
#endif