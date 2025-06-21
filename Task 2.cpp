#include <iostream>
#include <Windows.h>

int fibonacci(int n)
{
    if (n <= 1) return n;

    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
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
Скорость - O(n), линейная, так как каждая итерация содержит фиксированное количество операций

Память - O(1), константная, так как использует фиксированное количество переменных независимо от входного значения n
*/