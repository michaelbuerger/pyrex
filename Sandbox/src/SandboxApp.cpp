#include <Pyrex.h>

#include <stdio.h>

class Sandbox : public Pyrex::Application {
public:
	Sandbox() {
		printf("Made in the Pyrex...\n");
	}

	~Sandbox() {

	}
};

Pyrex::Application* Pyrex::CreateApplication() {
	return new Sandbox();
}