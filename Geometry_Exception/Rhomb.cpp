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
	get_corner(A, B, C, D);
	get_side(a, b, c, d);
	print_info();
}
void Rhomb::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
	if ((corner_a != corner_c) && (corner_b != corner_d)) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: углы А и С, либо углы B и D не равны!\n");
	if ((corner_a == corner_d) && (corner_b == corner_c)) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: углы А и С, либо углы B и D не равны!\n");
}
void Rhomb::get_side(int a, int b, int c, int d)
{
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
	if ((side_a != side_c) && (side_b != side_d) && (side_d != side_a)) throw Figure_exception::Figure_exception("Ошибка создания фигуры. Причина: стороны не равны между собой!\n");
}
