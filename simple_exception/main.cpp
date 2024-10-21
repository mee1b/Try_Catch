#include <iostream>
#include <exception>
#include <Windows.h>

class BadLength : public std::exception
{
public:
    const char* what() const override { return "Вы ввели слово запретной длины! До свидания!"; }
};

static int len(const std::string& str, const int& bad_length)
{
    int forbidden_length = str.length();
    if (forbidden_length == bad_length) throw BadLength::BadLength();
    return forbidden_length;
}

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int bad_length{}, forbidden_length{};
    std::cout << "Введите запретную длину: ";
    std::cin >> bad_length;
    std::string word;
    std::cout << "Введите слово: ";
    std::cin >> word;

    try
    {
        forbidden_length = len(word, bad_length);
        std::cout << "Длина слова \"" << word << "\" равна " << forbidden_length << std::endl;

    }
    catch (const BadLength& ex) { std::cout << ex.what(); }

    return 0;
}
