#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

#pragma pack(push, 1)
typedef struct
{
	char name[100];
	unsigned year : 16;
	char cl :8;
	unsigned age : 16;
	unsigned bal : 16;
}uc;
#pragma pack(pop)

void create(uc* c)
{
	int f1 = 0, f3 = 0, f4 = 0;
	char f2;
	std::cout << "Name: ";
	std::cin >> c->name;
	std::cout << "Year: ";
	std::cin >> f1;
	//std::cin >> c->year;
	std::cout << "class: ";
	std::cin >> f2;
	//std::cin >> c->cl;
	std::cout << "age: ";
	std::cin >> f3;
	//std::cin >> c->age;
	std::cout << "bal: ";
	std::cin >> f4;
	//std::cin >> c->bal;
	c->year = f1;
	c->cl = f2;
	c->age = f3;
	c->bal = f4;
}

void vivod(uc* a_m, int g, int n1, int n2)
{
	if (g == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].year >= n1 && a_m[i].year <= n2)
			{
				std::cout << "Name: " << a_m[i].name << '\n';
				std::cout << "Year: " << a_m[i].year << '\n';
				std::cout << "Clas: " << a_m[i].cl << '\n';
				std::cout << "Age: " << a_m[i].age << '\n';
				std::cout << "Bal: " << a_m[i].bal << '\n';
				std::cout << '\n';
			}
		}
	}
	if (g == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].cl >= n1 && a_m[i].cl <= n2)
			{
				std::cout << "Name: " << a_m[i].name << '\n';
				std::cout << "Year: " << a_m[i].year << '\n';
				std::cout << "Clas: " << a_m[i].cl << '\n';
				std::cout << "Age: " << a_m[i].age << '\n';
				std::cout << "Bal: " << a_m[i].bal << '\n';
				std::cout << '\n';
			}
		}
	}
	if (g == 3)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].age >= n1 && a_m[i].age <= n2)
			{
				std::cout << "Name: " << a_m[i].name << '\n';
				std::cout << "Year: " << a_m[i].year << '\n';
				std::cout << "Clas: " << a_m[i].cl << '\n';
				std::cout << "Age: " << a_m[i].age << '\n';
				std::cout << "Bal: " << a_m[i].bal << '\n';
				std::cout << '\n';
			}
		}
	}
	if (g == 4)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].bal >= n1 && a_m[i].bal <= n2)
			{
				std::cout << "Name: " << a_m[i].name << '\n';
				std::cout << "Year: " << a_m[i].year << '\n';
				std::cout << "Clas: " << a_m[i].cl << '\n';
				std::cout << "Age: " << a_m[i].age << '\n';
				std::cout << "Bal: " << a_m[i].bal << '\n';
				std::cout << '\n';
			}
		}
	}
	std::cout << '\n';
}

int main()
{
	setlocale(0, "");
	uc a;
	uc a_m[10];
	int g = -1;
	while (g != 0)
	{
		std::cout << "1 - create, 2 - edit, 3 - вывод, 0 - exit: ";
		std::cin >> g;
		if (g == 1)
		{
			int i = 0;
			while (i < 10)
			{
				create(&a);
				a_m[i] = a;
			}
		}
		else if (g == 2)
		{
			int i = 0;
			std::cout << "index: ";
			std::cin >> i;
			create(&a);
			a_m[i] = a;
		}
		else if (g == 3)
		{
			int i = 0, n1 = 0, n2 = 0;
			std::cout << "1 - year" << '\n' << "2 - class" << '\n' << "3 - age" << '\n' << "4 - bal" << '\n';
			std::cin >> i;
			std::cout << "с ";
			std::cin >> n1;
			std::cout << "по ";
			std::cin >> n2;
			vivod(a_m, i, n1, n2);

		}
	}



	//system("pause");
	return 0;
}
