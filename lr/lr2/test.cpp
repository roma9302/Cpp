//number 1
using namespace std;

int main() {
    double z, a, b;
    setlocale(LC_ALL, "RU");
    int functionChoice;

    cout << "Введите значение z: ";
    cin >> z;

    cout << "Выберите функцию:\n1. f(x) = 2x\n2. f(x) = x^2\n3. f(x) = x/3\n";
    cin >> functionChoice;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;

    double x;
    if (z <= 0) {
        x = pow(z,2)/2; 
    }
    else {
        x=  sqrt(z); 
    }

    double f_x;
    switch (functionChoice) {
    case 1:
        f_x = 2 * x; // f(x) = 2x
        break;
    case 2:
        f_x = x * x; // f(x) = x^2
        break;
    case 3:
        f_x = x / 3; // f(x) = x/3
        break;
    default:
        cout << "Неверный выбор функции!" << endl;
        return 0;
    }

    // Вычисление y
    double y = (b * f_x / cos(x)) + (a * log(fabs(tan(x / 2))));

    cout << "Результат y: " << y << endl;

    return 0;
}



//number 2
#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y, z;


    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;
    cout << "Введите значение z: ";
    cin >> z;


    double max1 = max(x * y, x + y);


    double w = max(max1, 0.0);
    w = w * w;


    cout << "Результат w: " << w << endl;

    return 0;
}
