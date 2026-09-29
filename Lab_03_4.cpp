// Lab_03_4.cpp
// < Тарабас Максим >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 26

#include <iostream>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    // розгалуження в повній формі
    if ((x - 1) * (x - 1) + y * y <= 1 && y >= 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}