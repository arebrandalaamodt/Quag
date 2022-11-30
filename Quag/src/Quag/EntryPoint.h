#pragma once

#ifdef QU_PLATFORM_WINDOWS

extern Quag::Application* Quag::CreateApplication();

int main(int argc, char** argv)
{
	printf("Quag Engine Online!\n");

	Quag::Log::Init();
	//Quag::Log::GetCoreLogger()->warn("Initialized Core Log!");
	//Quag::Log::GetClientLogger()->info("Initialized Client Log!");

	int a = 5;
	int b = 9;
	QU_CORE_WARN("Initialized Core Log!Var={0}", a);
	QU_WARN("Initialized Core Log2! Var={1} Var={1}", a, b);
	QU_WARN("Initialized Core Log2!Var={0}", b);

	auto app = Quag::CreateApplication();
	app->Run();
	delete app;

}

#endif // QU_PLATFORM_WINDOWS
