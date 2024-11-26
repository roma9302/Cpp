//number 1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1, x2;
    int functionChoice;
    setlocale(LC_ALL, "RU");

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;

    double d;
    d = pow(b, 2) - 4 * a * c;

    if (d < 0) {
        functionChoice = 1;
    }
    else if (d == 0) {
        functionChoice = 2;
    }
    else {
        functionChoice = 3;
    }

    switch (functionChoice) {
    case 1:
        cout << "ваше значение дискриминанта меньше 0. Корней нет." << endl;
        break;

    case 2:
        cout << "ваше значение дискриминанта равно 0. Корень 1." << endl;
        x1 = -b / (2 * a);
        cout << "Корень: " << x1 << endl;
        break;

    case 3:
        cout << "ваше значение дискриминанта больше 0. Корней 2." << endl;
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        cout << "Корень 1: " << x1 << ", Корень 2: " << x2 << endl;
        break;

    default:
        cout << "Неверный выбор функции!" << endl;
        return 0;
    }

    return 0;
}


//number 2
#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    int functionChoice = 0; 
    setlocale(LC_ALL, "RU");

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;

   
    if ((c * c == a * a + b * b) || (a * a == b * b + c * c) || (b * b == a * a + c * c)) {
        functionChoice = 1;
    }
    
    else if (a == b == c) {
       
        functionChoice = 2;
    }
   
    else if (a == b || b == c || c == a) {
        functionChoice = 3;
    }
   
    else if (a + b <= c || a + c <= b || b + c <= a) {
        functionChoice = 4;
    }
    else {
        cout << "Треугольник разносторонний" << endl;
        return 0; 
    }

    switch (functionChoice) {
    case 1:
        cout << "Треугольник прямоугольный" << endl;
        break;
    case 2:
        cout << "Треугольник равносторонний" << endl;
        break;
    case 3:
        cout << "Треугольник равнобедренный" << endl;
        break;
    case 4:
        cout << "Треугольника не существует" << endl;
        break;
    default:
        cout << "Неверный выбор функции!" << endl;
        return 0;
    }

    return 0;
}



//number 3
#include <iostream>
using namespace std;

int main() {
    int n;
    setlocale(LC_ALL, "RU");
    cout << "Введите число n (n < 100): ";
    cin >> n;

    if (n < 0 || n >= 100) {
        cout << "Число должно быть в диапазоне от 0 до 99." << endl;
        return 1;
    }

    string word;
    if (n % 10 == 1 && n % 100 != 11) {
        word = "корова";
    }
    else if (n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 12 || n % 100 > 14)) {
        word = "коровы";
    }
    else {
        word = "коров";
    }

    cout << n << " " << word << endl;
    return 0;
}


//number 4
#include <iostream>
using namespace std;

int main() {
    int day;
    setlocale(LC_ALL, "RU");
    cout << "Введите номер дня недели (1 - 7): ";
    cin >> day;

    switch (day) {
    case 1:
        cout << "Понедельник" << endl;
        break;
    case 2:
        cout << "Вторник" << endl;
        break;
    case 3:
        cout << "Среда" << endl;
        break;
    case 4:
        cout << "Четверг" << endl;
        break;
    case 5:
        cout << "Пятница" << endl;
        break;
    case 6:
        cout << "Суббота" << endl;
        break;
    case 7:
        cout << "Воскресенье" << endl;
        break;
    default:
        cout << "Некорректный номер дня. Пожалуйста, введите число от 1 до 7." << endl;
    }

    return 0;
}



//number 5
#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    setlocale(LC_ALL, "RU");
    cout << "Введите три целых числа A, B и C: ";
    cin >> A >> B >> C;

    bool has1 = (A % 2 == 0) || (B % 2 == 0) || (C % 2 == 0);
    bool has2 = (A % 2 != 0) || (B % 2 != 0) || (C % 2 != 0);

    if (has1 && has2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

