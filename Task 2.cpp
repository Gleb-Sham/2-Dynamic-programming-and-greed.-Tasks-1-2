#include <iostream>
#include <Windows.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int* fib = new int[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int result = fib[n];
    delete[] fib;
    return result;
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
Скорость - O(n), линейная, так все операции внутри цикла выполняются за константное время

Память - O(n), линейная, так как алгоритм создает динамический массив размером n + 1, а дополнительные переменные занимают константную память и не зависят от n
*/