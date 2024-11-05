#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"



Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C)
{
	name = "Равнобедренный треугольник";
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
void Isosceles_triangle::get_side(int a, int b, int c)
{
	side_a = a;
	side_b = b;
	side_c = c;
	if (side_a != side_c) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: стороны а и b не равны!\n");
}
void Isosceles_triangle::get_corner(int a, int b, int c)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	if (corner_a != corner_c) throw Figure_exception::Figure_exception("Ошибка создания фигуры.Причина: углы А и В не равны!\n");
}
