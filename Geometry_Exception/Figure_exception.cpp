#include <iostream>
#include <exception>
#include "Figure_exception.h"

const char* exception_1::what() const
{
	return "������ �������� ������. �������: ����� ����� �� ����� 180 ��������!\n";
}

const char* exception_2::what() const
{
	return "������ �������� ������. �������: ���� � �� ����� 90 ��������!\n";
}

const char* exception_3::what() const
{
	return "������ �������� ������. �������: ������� � � b �� �����, ���� ���� � � � �� �����!\n";
}

const char* exception_4::what() const
{
	return "������ �������� ������. �������: ������� �� ����� ���� �����, ���� ����(����) �� ����� 60 ��������!\n";
}

const char* exception_5::what() const
{
	return "������ �������� ������. �������: ����� ����� �� ����� 360 ��������!\n";
}

const char* exception_6::what() const
{
	return "������ �������� ������. �������: ������� � � �, ���� ������� b � d �� �����, ���� ���� �� ����� 90 ��������!\n";
}

const char* exception_7::what() const
{
	return "������ �������� ������. �������: ������� �� ����� ����� �����, ���� ���� �� ����� 90 ��������!\n";
}

const char* exception_8::what() const
{
	return "������ �������� ������. �������: ������� � � �, ���� ������� b � d �� �����, ��� ���� � � B, �� ����� ����� C � D ��������������!\n";
}

const char* exception_9::what() const
{
	return "������ �������� ������. �������: ������� �� ����� ����� ����� ��� ���� � � �, ���� ���� B � D �� �����!!\n";
}