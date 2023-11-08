// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>

int main() 
{
    setlocale(LC_ALL, "");
    int n;
    int sum = 0;

    std::cout << "Введите число n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << "Сумма от 1 до " << n << " равна " << sum << std::endl;

    return 0;
}
