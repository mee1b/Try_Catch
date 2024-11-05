#include <iostream>
#include "Figure_exception.h"
#include "geometry.h"

Parallelogram::Parallelogram()
{
	name = "��������������";
}
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D)
{
	name = "��������������";
	try
	{
		get_corner(A, B, C, D);
		get_side(a, b, c, d);
		print_info();
	}
	catch (const Figure_exception& ex)
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
	if ((side_a != side_c) && (side_b != side_d)) throw Figure_exception::Figure_exception("������ �������� ������. �������: ������� � � �, ���� ������� b � d �� �����!\n");
	if ((side_a == side_d) && (side_b == side_c)) throw Figure_exception::Figure_exception("������ �������� ������. �������: ������� � � �, ���� ������� b � d �� �����!\n");
}
void Parallelogram::get_corner(int a, int b, int c, int d)
{
	corner_a = a;
	corner_b = b;
	corner_c = c;
	corner_d = d;
	if ((corner_a != corner_c) && (corner_b != corner_d)) throw Figure_exception::Figure_exception("������ �������� ������. �������: ���� � � B, �� ����� ����� C � D ��������������!\n");
	if ((corner_a == corner_d) && (corner_b == corner_c)) throw Figure_exception::Figure_exception("������ �������� ������. �������: ���� � � B, �� ����� ����� C � D ��������������!\n");
}