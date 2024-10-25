#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"

Square::Square()
{
	name = " вадрат";
}
Square::Square(int a, int b, int c, int d, int A, int B, int C, int D)
{
	name = " вадрат";
	try
	{
		get_corner(A, B, C, D);
		get_side(a, b, c, d);
		print_info();
	}
	catch (const exception_7& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
void Square::get_side(int a, int b, int c, int d)
{
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
	if ((side_a != side_b) && (side_b != side_c) && (side_c != side_d)) throw exception_7::exception_7();
}
void Square::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
	if ((corner_a != 90) && (corner_b != 90) && (corner_c != 90) && (corner_d != 90)) throw exception_7::exception_7();
}