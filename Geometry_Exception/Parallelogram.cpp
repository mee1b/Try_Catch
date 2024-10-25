#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"

Parallelogram::Parallelogram()
{
	name = "ֿאנאככוכמדנאלל";
}
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D)
{
	name = "ֿאנאככוכמדנאלל";
	try
	{
		get_corner(A, B, C, D);
		get_side(a, b, c, d);
		print_info();
	}
	catch (const exception_8& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
void Parallelogram::get_side(int a, int b, int c, int d)
{
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
	if ((side_a != side_c) && (side_b != side_d)) throw exception_8::exception_8();
	if ((side_a == side_d) && (side_b == side_c)) throw exception_8::exception_8();
}
void Parallelogram::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
	if ((corner_a != corner_c) && (corner_b != corner_d)) throw exception_8::exception_8();
	if ((corner_a == corner_d) && (corner_b == corner_c))throw exception_8::exception_8();
}