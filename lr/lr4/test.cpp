//number 1
#include <iostream>

using namespace std;

int main() {
    int n, k;
    setlocale(LC_ALL, "RU");

    cout << "Введите значение N (0 < N < K < 1000): ";
    cin >> n;
    cout << "Введите значение K: ";
    cin >> k;

  
    if (n <= 0 || k <= n || k >= 1000) {
        cout << "Некорректные значения N и K." << endl;
       
    }

    cout << "Числа от " << n << " до " << k << ", которые делятся на 3, но не делятся на 5:" << endl;

    for (int i = n; i <= k; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}

//number 2
#include <iostream>

int main() {
    int n; 
    setlocale(LC_ALL, "RU");
    std::cout << "Введите натуральное число: ";
    std::cin >> n;
    int count = 0;
    int sum = 0;  
    int firstnum; 

    int temp = n;

    
    while (temp > 0) {
        firstnum = temp % 10; 
        sum += firstnum;       
        temp /= 10;              
        count++;                 
    }

    while (n >= 10) {
        n /= 10;
    }

    std::cout << "Количество цифр: " << count << std::endl;
    std::cout << "Сумма цифр: " << sum << std::endl;
    std::cout << "Первая цифра: " << n << std::endl;

    return 0;
}


//number 3

#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "Трехзначные числа, удовлетворяющие условию:\n";
    for (int n = 100; n <= 999; ++n) {
        int one = n / 100;       
        int two = (n / 10) % 10;   
        int three = n % 10;          

        
        if (2 * (one * three) == two) {
            std::cout << n << std::endl; 
        }
    }

    return 0;
}


//number 4
#include <iostream>
using namespace std;

int main() {
    int a, b;
    setlocale(LC_ALL, "RU");
    cout << "Введите a: " << endl;
    cin >> a;
    cout << "Введите b: " << endl;
    cin >> b;

    if (a < 1000 || a > 9999 || b < 1000 || b > 9999) {
        cout << "Числа введены неверно" << endl;
        exit(0);
    }

    cout << "Четырехзначные палиндромы на отрезке от " << a << " до " << b << ":" << endl;

    for (int i = a; i <= b; i++) {
        int x = i;

        
        int first = x / 1000; 
        x = x % 1000;       
        int second = x / 100; 
        x = x % 100;         
        int third = x / 10;   
        int fourth = x % 10;  
        if (first == fourth && second == third) {
            cout << i << endl; 
        }
    }

    return 0;
}
