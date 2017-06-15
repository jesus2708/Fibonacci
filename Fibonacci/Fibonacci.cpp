#include "stdafx.h"  //________________________________________ Fibonacci.cpp
#include "Fibonacci.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Fibonacci app;
	return app.BeginDialog(IDI_Fibonacci, hInstance);
}

void Fibonacci::Window_Open(Win::Event& e)
{
	wstring salida;
	int x = 0;
	int y = 1;
	int temporal;
	
	while (y<1000)
	{
		temporal = y;
		y = x + y;
		x = temporal;
		Sys::Format(salida, L"%d ", y);
		tbx1.Text += salida;
		
	} 
}

