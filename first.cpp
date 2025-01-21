#include <iostream>
using namespace std;

int main()
{
    float x, y;
    int ech;
    cout << "Введите два числа: " << endl;
    cin >> x;
    cin >> y;
    cout << "Выберите действие: " << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cin >> ech;

    switch (ech)
    {
    case 1:
        cout << "Сумма " << x << " и " << y << " = " << x + y << endl;
        break;
    case 2:
        cout << "Вычитание " << x << " и " << y << " = " << x + y << endl;
        break;
    default:
        break;
    }
    return 0;
}
