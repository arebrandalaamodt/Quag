#pragma once

#ifdef QU_PLATFORM_WINDOWS

extern Quag::Application* Quag::CreateApplication();

int main(int argc, char** argv)
{
	printf("Quag Engine Online!\n");
	auto app = Quag::CreateApplication();
	app->Run();
	delete app;

}

#endif // QU_PLATFORM_WINDOWS
