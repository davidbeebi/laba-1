/ altunin3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    // Объявляем массив и инициализируем его
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(array) / sizeof(array[0]); // Рассчитываем количество элементов в массиве

    // Выводим содержимое массива на экран
    std::cout << "Содержимое массива: ";
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Находим сумму элементов массива, кратных 3
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 3 == 0) {
            sum += array[i];
        }
    }

    // Выводим результат на экран
    std::cout << "Количество чисел в массиве: " << n << std::endl;
    std::cout << "Сумма элементов массива, кратных 3: " << sum << std::endl;

    return 0;
}
