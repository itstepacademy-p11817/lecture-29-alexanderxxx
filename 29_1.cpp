#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

const int flag1 = 1, flag2 = 2, flag3 = 4, flag4 = 8;

typedef struct
{
	char name[100];
	unsigned x : 4;
}st;

void create(st* c)
{
	c->x = 0;
	int f1 = 0, f2 = 0, f3 = 0, f4 = 0;
	std::cout << "Name: ";
	std::cin >> c->name;
	std::cout << "Пол 1 - муж. 2 - жен. : ";
	std::cin >> f1;
	std::cout << "Образование 1 - нет 2 - есть. : ";
	std::cin >> f2;
	std::cout << "Семейный статус 1 - холост/не замужем  2 - женат/замужем : ";
	std::cin >> f3;
	std::cout << "Работа 1 - Безработный  2 - Работает : ";
	std::cin >> f4;

	if (f1 == 2)
	{
		c->x |= flag1;
	}
	if (f2 == 2)
	{
		c->x |= flag2;
	}
	if (f3 == 2)
	{
		c->x |= flag3;
	}
	if (f4 == 2)
	{
		c->x |= flag4;
	}
}

void vivod(st* a_m, int g)
{
	if (g == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			if (!(a_m[i].x&flag1))
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
	else if (g == 2)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].x&flag1)
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
	else if (g == 3)
	{
		for (int i = 0; i < 10; i++)
		{
			if (!(a_m[i].x&flag2))
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
	else if (g == 4)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].x&flag2)
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
	else if (g == 5)
	{
		for (int i = 0; i < 10; i++)
		{
			if (!(a_m[i].x&flag3))
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
	else if (g == 6)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].x&flag3)
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
	else if (g == 7)
	{
		for (int i = 0; i < 10; i++)
		{
			if (!(a_m[i].x&flag4))
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
	else if (g == 8)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a_m[i].x&flag4)
			{
				std::cout << a_m[i].name << '\n';
				if (!(a_m[i].x&flag1))
				{
					std::cout << "пол: муж." << '\n';
				}
				else if (a_m[i].x&flag1)
				{
					std::cout << "пол: жен." << '\n';
				}
				if (!(a_m[i].x&flag2))
				{
					std::cout << "образование: нет" << '\n';
				}
				else if (a_m[i].x&flag2)
				{
					std::cout << "образование: есть" << '\n';
				}
				if (!(a_m[i].x&flag3))
				{
					std::cout << "Семейный статус: холост/не замужем" << '\n';
				}
				else if (a_m[i].x&flag3)
				{
					std::cout << "Семейный статус: женат/замужем" << '\n';
				}
				if (!(a_m[i].x&flag4))
				{
					std::cout << "работа: безработный" << '\n';
				}
				else if (a_m[i].x&flag4)
				{
					std::cout << "работа: есть" << '\n';
				}
			}
		}
	}
}




int main()
{
	setlocale(0, "");
	st a;
	st a_m[10];
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
			int i = 0;
			std::cout << "1 - вывод мужчин" << '\n' << "2 -вывод женщин" << '\n' << "3 -вывод без образования" << '\n' << "4 -вывод с образованием" << '\n' << "5 -вывод холостых/не замужем" << '\n' << "6 -вывод женатых/замужем" << '\n' << "7 -вывод безработных" << '\n' << "8 -вывод с работой" << '\n';
			std::cin >> i;

			vivod(a_m, i);

		}
	}



	//system("pause");
	return 0;
}