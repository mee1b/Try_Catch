#pragma once

class Figure_exception : public std::exception
{
public:
	Figure_exception(const char* text_error) : std::exception(text_error)
	{}
};
