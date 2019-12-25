#include <Sandbox.h>

Sandbox::Sandbox() {

}
Sandbox::~Sandbox() {

}


// Bootstrap itself from the Tron Entry point
Tron::Application* Tron::CreateApplication() {
	return new Sandbox();
}
