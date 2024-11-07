#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"

Square::Square()
{
	name = "�������";
}
Square::Square(int a, int b, int c, int d, int A, int B, int C, int D)
{
	name = "�������";
	get_corner(A, B, C, D);
	get_side(a, b, c, d);
	print_info();
}
void Square::get_side(int a, int b, int c, int d)
{
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
	if ((side_a != side_b) && (side_b != side_c) && (side_c != side_d)) throw Figure_exception::Figure_exception("������ �������� ������. �������: ������� �� ����� ����� �����!\n");
}
void Square::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
	if ((corner_a != 90) && (corner_b != 90) && (corner_c != 90) && (corner_d != 90)) throw Figure_exception::Figure_exception("������ �������� ������. �������: ���� �� ����� 90 ��������!\n");
}