#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"


Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C)
{
	name = "Равносторонний треугольник";
	try
	{
		get_corner(A, B, C);
		get_side(a, b, c);
		print_info();
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
void Equilateral_triangle::get_side(int a, int b, int c)
{
	side_a = a;
	side_b = b;
	side_c = c;
	if ((side_a != side_b) && (side_b != side_c)) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: стороны не равны друг другу!\n");
}
void Equilateral_triangle::get_corner(int a, int b, int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	if ((corner_a != corner_b) && (corner_b != corner_c)) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: угол(углы) не равны 60 градусов!\n");
}
void Equilateral_triangle::print_info() const
{
	std::cout << name << ":\n";
	std::cout << "ФИГУРА СОЗДАНА!\n";
	std::cout << "Стороны: а = " << side_a << " b = " << side_b << " c = " << side_c << std::endl;
	std::cout << "Углы: А = " << corner_a << " B = " << corner_b << " C = " << corner_c << std::endl << std::endl;
}