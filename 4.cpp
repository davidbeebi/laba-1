// altunin4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n;

    cout << "Введите количество элементов массива: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Содержимое массива:" << endl;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
        }
    }

    cout << "Сумма элементов массива, кратных 3, равна: " << sum << endl;

    delete[] arr;

    return 0;
}
