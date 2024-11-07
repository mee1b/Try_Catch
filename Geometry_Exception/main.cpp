#include <iostream>
#include "geometry.h"
#include "Figure_exception.h"

int main()
{
	setlocale(LC_ALL, "rus");

	try
	{
		Triangle t(0, 2, 5, 60, 60, 10);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Equilateral_triangle e(3, 3, 3, 60, 60, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Isosceles_triangle i(0, 2, 5, 60, 10, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Parallelogram p(0, 0, 2, 5, 60, 10, 60, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Rightangled_triangle rt(0, 2, 5, 60, 10, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Quadrilateral q(0, 0, 2, 5, 60, 10, 60, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Rectangle r(0, 0, 2, 5, 60, 10, 60, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Square s(0, 0, 2, 5, 60, 10, 60, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Rhomb rh(0, 0, 2, 5, 60, 10, 60, 60);
	}
	catch (const Figure_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return EXIT_SUCCESS;
}