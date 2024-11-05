#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"

Rectangle::Rectangle()
{
	name = "Прямоугольник";
}
Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
	name = "Прямоугольник";
	try
	{
		get_corner(A, B, C, D);
		get_side(a, b, c, d);
		print_info();
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
void Rectangle::get_side(int a, int b, int c, int d)
{
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
	if ((side_a != side_c) && (side_b != side_d)) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: стороны а и с, либо стороны b и d не равны!\n");
	if ((side_a == side_d) && (side_b == side_c)) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: стороны а и с, либо стороны b и d не равны!\n");
}
void Rectangle::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
	if ((corner_a != 90) && (corner_b != 90) && (corner_c != 90) && (corner_d != 90)) throw Figure_exception::Figure_exception("Ошибка создания фигуры.Причина: углы не равны 90 градусов!\n");
}
