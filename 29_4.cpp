#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

typedef enum
{
	HUMAN,
	CAT,
	CAR
}type_t;

typedef enum
{
	М,
	Ж
}pol_t;


typedef struct
{
	type_t type;
	struct
	{
		char name[100];
		pol_t pol;
		int age;
		int rost;
	}human;
	struct
	{
		char name[100];
		pol_t pol;
		char poroda[100];
		int age;
	}cat;
	struct
	{
		char marca[100];
		char model[100];
		int gv;
	}car;
}str;


void create(str* c)
{
	int g = 0, p=0;
	std::cout << "1 - human, 2 - cat, 3 - car: ";
	std::cin >> g;
	if (g == 1)
	{
		c->type = HUMAN;
		std::cout << "Name: ";
		std::cin >> c->human.name;
		std::cout << "Пол, 1 - М, 2 - Ж: ";
		std::cin >> p;
		if (p == 1)
		{
			c->human.pol = М;
		}
		else if (p == 2)
		{
			c->human.pol = Ж;
		}
		//std::cin >> c->human.pol;
		std::cout << "Возраст: ";
		std::cin >> c->human.age;
		std::cout << "Рост: ";
		std::cin >> c->human.rost;
	}
	else if (g == 2)
	{
		c->type = CAT;
		std::cout << "Name: ";
		std::cin >> c->cat.name;
		std::cout << "Пол, 1 - М, 2 - Ж: ";
		std::cin >> p;
		if (p == 1)
		{
			c->cat.pol = М;
		}
		else if (p == 2)
		{
			c->cat.pol = Ж;
		}
		//std::cin >> c->cat.pol;
		std::cout << "Порода: ";
		std::cin >> c->cat.poroda;
		std::cout << "Возраст: ";
		std::cin >> c->cat.age;
	}
	else if (g == 3)
	{
		c->type = CAR;
		std::cout << "Марка: ";
		std::cin >> c->car.marca;
		std::cout << "Модель: ";
		std::cin >> c->car.model;
		std::cout << "Год выпуска: ";
		std::cin >> c->car.gv;
	}
}





void vivod_human(str* a_m, int g, int n1, int n2)
{
	if (g == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].human.age >= n1 && a_m[i].human.age <= n2 && a_m[i].type==HUMAN)
			{
				if (a_m[i].human.pol == М)
				{
					std::cout << "Mr ";
				}
				else if (a_m[i].human.pol == Ж)
				{
					std::cout << "Ms ";
				}
				std::cout << a_m[i].human.name;
				std::cout << " aged " << a_m[i].human.age;
				std::cout << " и ростом " << a_m[i].human.rost << " см";
				std::cout << '\n';
			}
		}
	}
	if (g == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].human.rost >= n1 && a_m[i].human.rost <= n2 && a_m[i].type == HUMAN)
			{
				if (a_m[i].human.pol == М)
				{
					std::cout << "Mr ";
				}
				else if (a_m[i].human.pol == Ж)
				{
					std::cout << "Ms ";
				}
				std::cout << a_m[i].human.name;
				std::cout << " aged " << a_m[i].human.age;
				std::cout << " и ростом " << a_m[i].human.rost << " см";
				std::cout << '\n';
			}
		}
	}
	std::cout << '\n';
}


void vivod_cat(str* a_m, int g, int n1, int n2)
{
	for (int i = 0; i < 10; i++)
	{
		if (a_m[i].cat.age >= n1 && a_m[i].cat.age <= n2 && a_m[i].type == CAT)
		{
			if (a_m[i].cat.pol == М)
			{
				std::cout << "Кот ";
			}
			else if (a_m[i].cat.pol == Ж)
			{
				std::cout << "Кошка ";
			}
			std::cout << a_m[i].cat.name;
			std::cout << " aged " << a_m[i].cat.age;
			std::cout << " породы " << a_m[i].cat.poroda << '\n';	
			std::cout << '\n';
		}
	}
	std::cout << '\n';
}

void vivod_car(str* a_m, int g, int n1, int n2)
{
	for (int i = 0; i < 10; i++)
	{
		if (a_m[i].car.gv >= n1 && a_m[i].car.gv <= n2 && a_m[i].type == CAR)
		{
			std::cout << a_m[i].car.marca;
			std::cout << " " << a_m[i].car.model;
			std::cout << " " << a_m[i].car.gv << " года";
			std::cout << '\n';
		}
	}
	std::cout << '\n';
}



int main()
{
	setlocale(0, "");
	int g = -1;
	str c_m[10];
	str c;

	while (g != 0)
	{
		std::cout << "1 - Create, 2 - Edit, 3 - Print, 0 - Exit: ";
		std::cin >> g;
		if (g == 1)
		{
			int i = 0;
			while (i < 10)
			{
				create(&c);
				c_m[i] = c;
				i++;
			}
			g = -1;
		}
		else if (g == 2)
		{
			int i = 0;
			std::cout << "index: ";
			std::cin >> i;
			create(&c);
			c_m[i] = c;
			g = -1;
		}
		else if (g == 3)
		{
			int i = 0, n1 = 0, n2 = 0, q = 0;
			std::cout << "1 - human" << '\n' << "2 - cat" << '\n' << "3 - car" << '\n';
			std::cin >> i;
			if (i == 1)
			{
				std::cout << "1 - Возраст, 2 - Рост" << '\n';
				std::cin >> q;
				std::cout << "c ";
				std::cin >> n1;
				std::cout << "по ";
				std::cin >> n2;
				vivod_human(c_m, q, n1, n2);
			}
			else if (i == 2)
			{
				std::cout << "Возраст c ";
				std::cin >> n1;
				std::cout << "по ";
				std::cin >> n2;
				vivod_cat(c_m, q, n1, n2);
			}
			else if (i == 3)
			{
				std::cout << "Год выпуска c ";
				std::cin >> n1;
				std::cout << "по ";
				std::cin >> n2;
				vivod_car(c_m, q, n1, n2);
			}
		}
	}

	//system("pause");
	return 0;
}