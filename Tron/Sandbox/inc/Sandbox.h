#pragma once
#include<Tron.h>

class Sandbox : public Tron::Application{
public:
	Sandbox();
	~Sandbox();
};

// The client specified createapplication for bootstrapping onto Tron
Tron::Application* Tron::CreateApplication();
