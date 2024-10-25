#include <iostream>
#include <exception>
#include "Figure_exception.h"

const char* exception_1::what() const
{
	return "Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов!\n";
}

const char* exception_2::what() const
{
	return "Ошибка создания фигуры. Причина: угол С не равен 90 градусов!\n";
}

const char* exception_3::what() const
{
	return "Ошибка создания фигуры. Причина: стороны а и b не равны, либо углы А и В не равны!\n";
}

const char* exception_4::what() const
{
	return "Ошибка создания фигуры. Причина: стороны не равны друг другу, либо угол(углы) не равны 60 градусов!\n";
}

const char* exception_5::what() const
{
	return "Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов!\n";
}

const char* exception_6::what() const
{
	return "Ошибка создания фигуры. Причина: стороны а и с, либо стороны b и d не равны, либо углы не равны 90 градусов!\n";
}

const char* exception_7::what() const
{
	return "Ошибка создания фигуры. Причина: стороны не равны между собой, либо углы не равны 90 градусов!\n";
}

const char* exception_8::what() const
{
	return "Ошибка создания фигуры. Причина: стороны а и с, либо стороны b и d не равны, или углы А и B, не равны углам C и D соответственно!\n";
}

const char* exception_9::what() const
{
	return "Ошибка создания фигуры. Причина: стороны не равны между собой или углы А и С, либо углы B и D не равны!!\n";
}