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
