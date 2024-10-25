#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"

Rhomb::Rhomb()
{
	name = "Ромб";
}
Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D)
{
	name = "Ромб";
	try
	{
		get_corner(A, B, C, D);
		get_side(a, b, c, d);
		print_info();
	}
	catch (const exception_9& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
void Rhomb::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
	if ((corner_a != corner_c) && (corner_b != corner_d)) throw exception_9::exception_9();
	if ((corner_a == corner_d) && (corner_b == corner_c))throw exception_9::exception_9();
}
void Rhomb::get_side(int a, int b, int c, int d)
{
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
	if ((side_a != side_b) && (side_b != side_c) && (side_c != side_d)) throw exception_9::exception_9();
}
