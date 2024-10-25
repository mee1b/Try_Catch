#pragma once
#pragma once
class Triangle
{
protected:
	int side_a, side_b, side_c;
	int corner_a, corner_b, corner_c;
	std::string name;
public:
	Triangle();
	Triangle(int a, int b, int c, int A, int B, int C);
	virtual void get_side(int a, int b, int c);
	virtual void get_corner(int a, int b, int c);
	void print_info() const;
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int a, int b, int c, int A, int B, int C);
	void get_side(int a, int b, const int) override;
	void get_corner(int a, int b, int c) override;
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int a, int b, int c, int A, int B, int C);
	void get_side(int a, int b, int c = 0) override;
	void get_corner(int a, int b, int c = 0) override;
};

class Rightangled_triangle : public Triangle
{
public:
	Rightangled_triangle(int a, int b, int c, int A, int B, int C);
	void get_corner(int a, int b, int c) override;
};

class Quadrilateral
{
protected:
	int side_a, side_b, side_c, side_d;
	int corner_a, corner_b, corner_c, corner_d;
	std::string name;
public:
	Quadrilateral();
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	virtual void get_side(int a, int b, int c, int d);
	virtual void get_corner(int a, int b, int c, int d);
	void print_info() const;
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle();
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
	void get_side(int a, int b, int c, int d) override;
	void get_corner(int a, int b, int c, int d) override;
};

class Square : public Rectangle
{
public:
	Square();
	Square(int a, int b, int c, int d, int A, int B, int C, int D);
	void get_side(int a, int b, int c, int d) override;
	void get_corner(int a, int b, int c, int d) override;
};

class Parallelogram : public Rectangle
{
public:
	Parallelogram();
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
	void get_side(int a, int b, int c, int d) override;
	void get_corner(int a, int b, int c, int d) override;
};

class Rhomb : public Square
{
public:
	Rhomb();
	Rhomb(int a, int b, int c, int d, int A, int B, int C, int D);
	void get_corner(int a, int b, int c, int d) override;
	void get_side(int a, int b, int c, int d) override;
};