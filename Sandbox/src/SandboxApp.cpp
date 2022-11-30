#include <Quag.h>

class Sandbox : public Quag::Application
{
	public:
		Sandbox() {}
		~Sandbox() {}
};

Quag::Application* Quag::CreateApplication()
{
	return new Sandbox();
}
