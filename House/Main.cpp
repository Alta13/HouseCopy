#include <Windows.h>
#include "Human.h"
#include"Flat.h"
#include"House.h"
#include <iostream>

using namespace std;

unsigned int Human::count_instance{ 1 };

int main()
{
	setlocale(LC_ALL, "RU");
	Human x("�������", "���������", "����������");
	Human y("������", "�����", "����������");
	Human z("�������", "��������", "��������");
	x.showHuman();
	y.showHuman();
	z.showHuman();
	Flat b;
	b.showFlat();
	House a;
	a.showHouse();

	return 0;
};