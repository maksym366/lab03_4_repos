// Lab_03_4.cpp
// <Тарабас Максим >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 26

#include <iostream>
using namespace std;

int main()
{
    double x; // координата x
    double y; // координата y
    double R; // радіус

    cout << "R = ";
    cin >> R;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    // Перевірка належності точки заштрихованій області
    if (
        ((x - R) * (x - R) + y * y <= R * R && y >= 0) ||
        ((x + R) * (x + R) + y * y <= R * R && y <= 0)
        )
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}