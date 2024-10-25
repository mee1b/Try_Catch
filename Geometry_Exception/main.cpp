#include <iostream>
#include "geometry.h"
#include "Figure_exception.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Triangle t(5, 4, 3, 60, 60, 60);
	Rightangled_triangle r(5, 4, 3, 60, 60, 30);
	Isosceles_triangle i(5, 4, 5, 60, 60, 50);
	Equilateral_triangle e(5, 2, 5, 60, 60, 60);
	Quadrilateral q(1, 2, 3, 4, 90, 90, 90, 90);
	Rectangle re(3, 2, 3, 2, 90, 90, 90, 90);
	Square s(3, 3, 3, 3, 90, 90, 90, 90);
	Parallelogram p(1, 2, 1, 2, 20, 10, 20, 10);
	Rhomb rh(1, 2, 1, 2, 20, 10, 20, 10);


	return EXIT_SUCCESS;
}