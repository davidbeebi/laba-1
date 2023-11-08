// altyninkonkin.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <map>

int main() 
{
    setlocale(LC_ALL, "");

    std::map<int, int> countMap;
    int n;

    std::cout << "Введите последовательность целых чисел (для завершения введите 0):" << std::endl;
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        countMap[n]++;
    }

    if (countMap.empty()) {
        std::cout << "Последовательность пуста." << std::endl;
        return 1;
    }

    // Находим минимальное число и количество его повторений
    int minNumber = countMap.begin()->first;
    int minCount = countMap.begin()->second;

    for (const auto& pair : countMap) {
        if (pair.second < minCount) {
            minNumber = pair.first;
            minCount = pair.second;
        }
    }

    std::cout << "Минимальное число: " << minNumber << std::endl;
    std::cout << "Количество повторений: " << minCount << std::endl;

    return 0;
}