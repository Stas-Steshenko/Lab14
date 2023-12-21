#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int s = 0;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    int* myArray = new int[n];

    cout << "Введіть цілі елементи масиву: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> myArray[i];
    }
    int* ptr = myArray;
    for (int i = 0; i < n; ++i) {
        s += *ptr;
        ptr++;
    }
    int x;
    x = s / n;
    cout << "Середнє значення елементів масиву: " << x << endl;
    delete[] myArray;

    return 0;
}