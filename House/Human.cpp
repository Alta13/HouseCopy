#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;

char* Human::createName(const char* name)
{
	char* temp = new char[strlen(name) + 1];
	strcpy_s(temp, strlen(name) + 1, name);
	return temp;
}

void Human::showHuman()
{
	cout << "Id: " << id << endl;
	cout << "���: " << familia << " " << name << " " << otchestvo << endl;
	cout << endl;
}