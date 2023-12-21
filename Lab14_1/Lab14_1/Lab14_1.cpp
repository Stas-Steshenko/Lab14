#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    int* arr = new int[n];

    cout << "Введіть цілі елементи масиву: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> arr[i];
    }
    int* min = &arr[0];
    int* max = &arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            min = &arr[i];
        }

        if (arr[i] > *max) {
            max = &arr[i];
        }
    }

    int distance = max - min;

    cout << "Максимальне значення: " << *max << endl;
    cout << "Мінімальне значення: " << *min << endl;
    cout << "Відстань між позиціями max і min: " << fabs(distance) << endl;
    delete[] arr;

    return 0;
}