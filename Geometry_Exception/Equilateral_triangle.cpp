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
	catch (const exception_4& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
void Equilateral_triangle::get_side(int a, int b, int c)
{
	side_a = a;
	side_b = b;
	side_c = c;
	if ((side_a != side_b) && (side_b != side_c)) throw exception_4::exception_4();
}
void Equilateral_triangle::get_corner(int a, int b, int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	if ((corner_a != corner_b) && (corner_b != corner_c)) throw exception_4::exception_4();
}