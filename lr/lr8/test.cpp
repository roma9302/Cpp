//number 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum_necet = 0; 
    int c;
    int min_abs = -1; 
    int salam[20] = {-1, -2, 3, 0, -2, -8, 6, 8, 9, -6, 0, -4, 56, 70, 3, 53, 14, 59, -45, -9};
    float average = 0;
    int count_necet = 0; 
    int first_positive = -1; 
    int second_positive = -1; 
    int sum_positive = 0;
    int sum_max = 0;
    int max_element = 0;
    
    cout << "Введите значение c: ";
    cin >> c;

    for (auto element : salam) {
        cout << element << endl; 
        
        
        if (element % 2 != 0) {
            average += element;
            count_necet++; 
        }

        
        if (element < 0 && element % 2 != 0) {
            sum_necet += element; 
        }

        
        if (abs(element) < abs(min_abs)) {
            min_abs = element; 
        }
    }
    
    
    for (int i = 0; i < 20; i++) {
        if (salam[i] > 0) {
            if (first_positive == -1) {
                first_positive = i; 
            } else if (second_positive == -1) {
                second_positive = i; 
                break;
            }   
        }   
    }
    
    
    if (first_positive != -1 && second_positive != -1) {
        for (int i = first_positive + 1; i < second_positive; i++) {
            sum_positive += salam[i];
        }
    }
    
    
    for (int i = 0; i < 20; i++) {
        if (salam[i] > salam[max_element]) {
            max_element=i;
    }
        }
    
    
    for(int i = 0;  i  < max_element; i++) {
        sum_max += salam[i] ;
    }
    

    if (count_necet > 0) {
        average /= count_necet;
        cout << "Среднее арифметическое нечётных чисел: " << average << endl;

      
        for (auto element : salam) {
            if (element > average) {
                cout << "Элементы больше среднего арифметического: " << element << endl;
            }
        }
    } 

    
    
    cout << "Минимальное число по модулю: " << min_abs << endl;

    cout << "Сумма нечётных отрицательных чисел: " << sum_necet << endl;

    
    for (int i = 0; i < 20; i++) {
        if (salam[i] > c) {
            cout << "Номера больше C: " << i + 1 << endl;
        } 
    }    

    cout << "Сумма между первыми двумя положительными: " << sum_positive << endl;
    cout << "Сумма до максимального элемента " << sum_max << endl;
    return 0;
}



//number 2
#include <iostream>
using namespace std;

int main() {
    int qwerty[10];
    int reverse[10];
    
    
    cout << "Введите по очереди 10 значений массива:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> qwerty[i];
    }


    for (int i = 0; i < 10; i++) {
        reverse[i] = qwerty[9 - i];  
    }

    
    cout << "Массив в обратном порядке:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << reverse[i] << " ";
    }
    cout << endl;

    bool Palindrome = true;
    for (int i = 0; i < 10; i++) {
        if (qwerty[i] != reverse[i]) {
            Palindrome = false;
            break;
        }
    }

    if (Palindrome) {
        cout << "Массив является палиндромом." << endl;
    } else {
        cout << "Массив не является палиндромом." << endl;
    }

    return 0;
}


//number 3
#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std;

int main() {
    int fir[20]{};
    int sec[20]{};
    int thr[20]{};
    float average{};
    int sum{};
    int max{};
    int min{};

    srand(static_cast<unsigned int>(time(0))); 

    for(int i = 0; i < 20; i++) {
        int randomNum1 = rand() % (20 - 10 + 1) + 10;
        int randomNum2 = rand() % (20 - 10 + 1) + 10;
        fir[i] = randomNum1;
        sec[i] = randomNum2;
    }
    
    
    
    for(int i = 0; i<20; i++){
        thr[i]=fir[i]+sec[i];
    }
    
    
    
    for(int i = 0; i <= 20; i++){
        sum += thr[i];
        average = sum / 20;
    }

    for(int i = 0; i<20; i++){
        if(thr[i] < thr[min]){
            min=i;
        }
        if(thr[i] > thr[max]){
            max=i;
        }
    }
    
    
    
    for(int i = 0; i < 20; i++) {
        cout << i << " " << fir[i] << " "  << sec[i] << " " << thr[i] << endl;
        
    }
    
    cout << "Среднее арифметическое равно " << average << endl;
    cout << "Минимальное значение " << thr[min] << endl;
    cout << "Максимальное значение " << thr[max] << endl;
    return 0;
}



//number 4
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int yarik[20]{};
    int yarik_without_zero[20]; 
    int count = 0; 

    srand(static_cast<unsigned int>(time(0))); 

    
    for(int i = 0; i < 20; i++) {
        int random_number = rand() % 5; 
        yarik[i] = random_number;
    }
    
    
    for(int i = 0; i < 20; i++) {
        if(yarik[i] != 0) {
            yarik_without_zero[count] = yarik[i];
            count++; 
        }
    }

    for(int i = 0; i < 20; i++) {
        cout << "Элемент массива номер " <<  i  << " " << yarik[i] << " "  <<endl;
    }

  
    cout << "Массив без нулей: " << endl;
    for(int i = 0; i < count; i++) {
        cout << yarik_without_zero[i] << " ";
    }
    cout << endl;

    return 0;
}


//number 5
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int SIZE = 20;  
    int A[SIZE]{};
    int B[SIZE]{};  
    int sorted_B[SIZE]{};
    
    srand(static_cast<unsigned int>(time(0))); 

    
    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 20;
    }

    
    int id = 0; 
    for (int i = 0; i < SIZE; i++) {
        if (A[i] < 10) {
            B[id] = A[i];
            id++; 
        }
    }

    
    for(int i = 0; i < id-1; i++) {
        for(int n = 0; n < id-1-i; n++) { 
            if(B[n] > B[n+1]) { 
                int temp = B[n];
                B[n] = B[n+1];
                B[n+1] = temp;
            }
        }
    }
    
    
    cout << "Array A: ";
    for (int i = 0; i < SIZE; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    
    cout << "Array B: ";
    for (int i = 0; i < id; i++) { 
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
