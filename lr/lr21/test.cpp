//number 1

#include <iostream>
using namespace std;

template<typename T>
T sum_last_zero(const T* arr) {
    int last_zero; 
    T sum = 0; 


    for (int i = 0; i < 6; i++) {
        if (arr[i] == 0) {
            last_zero = i;
        }
    }


    for (int i = last_zero + 1; i < 6; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
 
    double numbers[] = {2.2,6.2,8.3,6.11,0,9.5};
    int numbers1[] = {2, 6, 8, 6, 0, 9};

    cout << "Сумма после 0 равна: " << sum_last_zero(numbers) << endl;
    cout << "Сумма после 0 равна: " << sum_last_zero(numbers1) << endl;

    return 0;
}


//number 2
#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
T sum_lower_diag(const T arr[3][3]) {
    T sum = 0;

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j) {
                sum += abs(arr[i][j]);
            }
        }
    }

    return sum;
}

int main() {
    int numbers[3][3] = {{4, 6, 7}, {-7, 23, -6}, {-4, -2, -1}};
    double numbers1[3][3] = {{4.4, 6.2, 7.6}, {-7.3, 23.6, -6.6}, {-4.1, -2.3, -1.4}};

    cout  << "Сумма модулей  ниже диагонали: " << sum_lower_diag(numbers) << endl;
    cout  << "Сумма модулей  ниже диагонали: " << sum_lower_diag(numbers1) << endl;

    return 0;
}
