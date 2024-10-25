#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"

Triangle::Triangle()
{
	side_a = 0;
	side_b = 0;
	side_c = 0;

	corner_a = 0;
	corner_b = 0;
	corner_c = 0;
}
Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
	name = "Òğåóãîëüíèê";
	try
	{
		get_corner(A, B, C);
		get_side(a, b, c);
		print_info();
	}
	catch (const exception_1& ex)
	{
		std::cout << ex.what() << std::endl;
	}

}
void Triangle::get_side(int a, int b, int c)
{
	side_a = a;
	side_b = b;
	side_c = c;
}
void Triangle::get_corner(int a, int b, int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	if (corner_a + corner_b + corner_c != 180) throw exception_1::exception_1();
}
void Triangle::print_info() const
{
	std::cout << name << ":\n";
	std::cout << "ÔÈÃÓĞÀ ÑÎÇÄÀÍÀ!\n";
	std::cout << "Ñòîğîíû: à = " << side_a << " b = " << side_b << " c = " << side_c << std::endl;
	std::cout << "Óãëû: À = " << corner_a << " B = " << corner_b << " C = " << corner_c << std::endl << std::endl;
}
