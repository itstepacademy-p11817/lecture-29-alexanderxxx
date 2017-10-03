#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

typedef enum
{
	INT,
	FLOAT,
	DOUBLE
}type_t;

typedef struct
{
	type_t type;
	union
	{
		int i;
		float f;
		double d;
	};
}num;


void create(num* c)
{
	int g = 0;
	std::cout << "1 - int, 2 - float, 3 - double: ";
	std::cin >> g;
	if (g == 1)
	{
		c->type = INT;
		std::cin >> c->i;
	}
	else if (g == 2)
	{
		c->type = FLOAT;
		std::cin >> c->f;
	}
	else if (g == 3)
	{
		c->type = DOUBLE;
		std::cin >> c->d;
	}
}

void print(num* c_m, int i)
{

	if (c_m[i].type == INT)
	{
		std::cout << "Num" << i <<": " << c_m[i].i << '\n';
	}
	else if (c_m[i].type == FLOAT)
	{
		std::cout << "Num" << i << ": " << c_m[i].f << '\n';
	}
	else if (c_m[i].type == DOUBLE)
	{
		std::cout << "Num" << i << ": " << c_m[i].d << '\n';
	}
}


int main()
{
	setlocale(0, "");
	int g = -1;
	num c_m[10];
	num c;

	while (g != 0)
	{
		std::cout << "1 - Create, 2 - Edit, 3 - Print, 4 - Print all, 0 - Exit: ";
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
			int i = 0;
			std::cout << "index: ";
			std::cin >> i;
			print(c_m, i);
			g = -1;
		}
		else if (g == 4)
		{
			for (int i = 0; i < 10; i++)
			{
				print(c_m, i);
			}
			g = -1;
		}
	}

	//system("pause");
	return 0;
}