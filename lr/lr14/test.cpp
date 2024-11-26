//number 1
#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int n, m;

    cout << "input n and m: ";
    cin >> n >> m;


    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 20 - 7; 
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int* result = new int[m];
    for (int j = 0; j < m; j++) {
        result[j] = 1; 
    }


    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (arr[i][j] < 0) {
                result[j] *= arr[i][j];
            }
        }
    }


    for (int j = 0; j < m; j++) {
        cout << " stolbec " << ": " << result[j] << endl;
    }
    
    
    delete[] result;

    return 0;
}

//number 2
#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int n,x, counter{};

    cout << "input n and m: ";
    cin >> n;


    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20 - 7; 
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Input x ";
    cin >> x;
    
    
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             if(i + j < n - 1 && arr[i][j] == x) {
                counter++;
            }
        }
    }
    cout << counter;
    

    return 0;
}



//number 3
#include <iostream>
#include <cstdlib> 
#include <cmath>
using namespace std;

int main() {
    int n, m;
    int sum_gl {};
    int sum_pob {};
    int diff;

    cout << "input n and m: ";
    cin >> n ;


    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 20 - 7; 
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j){
                sum_gl+=arr[i][j];
            }
        }
        cout << endl;
    }
    
    
    for (int i = 0; i < n; i++) {
        int j = n - 1 - i; 
        sum_pob += arr[i][j]; 
    }
    
    
    
    if(sum_gl>sum_pob){
        diff = sum_gl-sum_pob;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(i + j > n - 1 && arr[i][j]<0){
                    arr[i][j]= pow(diff,2);
                }
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        
        cout << endl;
    }else{
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int k = n - 1 - i; 
                arr[i][k] = 0; 
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }


    cout << "sum gl " <<sum_gl << endl;
    cout <<"sum pob "<< sum_pob << endl;
    cout << "difference " << pow(diff,2);


    return 0;
}
