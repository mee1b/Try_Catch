#include <iostream>
#include "geometry.h"
#include "Figure_exception.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Triangle t(0, 2, 5, 60, 60, 60);
	Equilateral_triangle e(3, 3, 3, 60, 60, 60);
	Isosceles_triangle i(0, 2, 5, 60, 10, 60);
	Parallelogram p(0, 0, 2, 5, 60, 10, 60, 60);
	Rightangled_triangle rt(0, 2, 5, 60, 10, 60);
	Quadrilateral q(0, 0, 2, 5, 60, 10, 60, 60);
	Rectangle r(0, 0, 2, 5, 60, 10, 60, 60);
	Square s(0, 0, 2, 5, 60, 10, 60, 60);
	Rhomb rh(0, 0, 2, 5, 60, 10, 60, 60);




	return EXIT_SUCCESS;
}