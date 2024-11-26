//number 1
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str_num;
    cout << "Введите число для подсчета цифр в числе: " << endl;
    cin >> str_num;

    int len = str_num.length();
    cout << len<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int len(int a) {
    if (a < 10 && a > -10) {
        return 1;
    }

    return 1 + len(a / 10);
}

int main() {
    int number = 748354835;
    cout << " in number " << number << " "  << len(number) <<endl;
    return 0;
}

//number 2
#include <iostream>
#include <math.h>


using namespace std;

int main(){
    int n;
    double sum{};
    cout << "input n number  n^1/2" << endl;
    cin >> n;
    
    
    for(int i = 1; i<n+1; i++){
        sum += pow(i, 0.5);
    }
    
    
    cout << sum;
    
    return 0;
}

#include <iostream>
#include <cmath> 

using namespace std;

double sqr_t(int n) {

    if (n == 1) {
        return sqrt(1);
    }

    return sqrt(n) + sqr_t(n - 1);
}

int main() {
    int n;
    cout << "Input n " << endl;
    cin >> n;
    cout <<  sqr_t(n) << endl;
    return 0;
}


//number 3
#include <iostream>

using namespace std;

int main() {
    int k;
    cout << "Input k: ";
    cin >> k;
    double v = 0; 

    double massiv[k]; 

    
    for (int i = 1; i <= k; i++) {
        double s = 1; 
        for (int j = 1; j <= i; j++) {
            s *= j; 
        }
        massiv[i] = 1 / s; 
    }
    
    for (int i = 1; i <= k; i++) {
        v += massiv[i]; 
    }
    
    cout <<  v << endl;

    return 0;
}


#include <iostream>

using namespace std;


double factorial(int k) {
    if (k== 1) {
        return 1; 
    }
    double fac =1;
    for(int i =1 ; i<k+1;i++){
        fac*=i;
    }
    return (1/fac) + factorial(k - 1); 
}


int main() {
    int k;
    cout << "Input k: ";
    cin >> k;
    cout << factorial(k) << endl; 
    return 0;
}



//number 4
#include <iostream>
using namespace std;

double element_n(int n) {
    if (n == 0) {
        return 1; 
    }
    
    return 0.2 + element_n(n - 1);
}

int main() {
    int n;
    cout << "Input n ";
    cin >> n;
    cout  << element_n(n) << endl; 
    
    return 0;
}


//number 5
#include <iostream>

using namespace std;



double qwerty(int n){
    if(n == 1){
      
        return 1;
    }
    
    return  1 + (1/qwerty(n-1));
    
}

int main(){
    double n {};
    cout << "Введите значение для n" << endl;
    cin >> n;
    cout << qwerty(n);
    return 0;
}
