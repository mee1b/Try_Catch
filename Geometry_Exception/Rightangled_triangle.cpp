#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"


Rightangled_triangle::Rightangled_triangle(int a, int b, int c, int A, int B, int C)
{
	name = "Прямоугольный треугольник";
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
void Rightangled_triangle::get_corner(int a, int b, int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	if (corner_c != 90) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: угол С не равен 90 градусов!\n");
}