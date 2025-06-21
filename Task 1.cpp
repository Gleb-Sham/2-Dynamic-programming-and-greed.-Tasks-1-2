#include <iostream>
#include <Windows.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    std::cout << "F(" << n << ") = " << fibonacci(n) << std::endl;
    return EXIT_SUCCESS;
}

/*
Скорость - O(2^n), экспоненциальная, так как каждый вызов функции порождает два новых вызова, что приводит к экспоненциальному росту количества операций

Память - O(n), линейная, так как максимальная глубина рекурсии равна n, что требует O(n) памяти в стеке вызовов
*/