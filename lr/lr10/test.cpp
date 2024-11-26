//number 1
#include <iostream>
#include <cmath>

using namespace std;

void Cil(double r, double h) {
    const double pi = 3.14;
    double cilindr = pi * r * r * h; 
    cout << "Объем цилиндра равен: " << cilindr << endl;
}

int main() {
    Cil(3, 6); 
    return 0;
}


//number 2
#include <iostream>

using namespace std;

int find_max(int n) {
    if (n == 0) {
        return 1; 
    }


    int last = n % 10; 
    int max = find_max(n / 10); 


    if (max > last) {
        return max;
    } else {
        return last;
    }
}

int main() {
    int number = 6448374;
    int max = find_max(number); 
    cout << "Максимальная цифра: " << max << endl; 

    return 0;
}


//number 3
#include <iostream>

using namespace std;


int find_sum(int array[],  int size) {
    int sum{};
    for(int i{}; i<size;i++){
        sum += array[i];
    }
    return sum;
}

int main() {
    int array1[] = {7,6,7,8,4, 9, 9,3,6};
    int array2[] ={8,5,4,8,4,8,9,6,3,22,6};
    
    int size1=sizeof(array1)/sizeof(array1[0]);
    int size2=sizeof(array2)/sizeof(array2[0]);
    
    int sum1 =find_sum(array1,size1);
    int sum2 =find_sum(array2,size2);
    
    
    
    if(sum1>sum2){
        cout << "Сумма первого массива больше,второго" << endl;
        
    }else {
        cout << "Сумма второго массива больше" << endl;
    }    
    
    
    
    return 0;
}
