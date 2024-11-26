//number 1

#include <iostream>

using namespace std;

int main() {
    int counter_without_zero = 0;
    int m, n;
    
    cout << "Введите количество строк и столбцов: " << endl;
    cin >> n >> m;
    
    int array[n][m];
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Введите значение массива для Строки " << i << " и Столбца " << j << ": ";
            cin >> array[i][j];
        }
    }
    
    
    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    a
    for (int j = 0; j < m; j++) {
        bool zero = false; 
        
        for (int i = 0; i < n; i++) {
            if (array[i][j] == 0) {
                zero = true; 
                break; 
            }
        }
        
        if (!zero) {
            counter_without_zero++; 
        }
    }
    
    cout << "Количество столбцов без нулевых элементов: " << counter_without_zero << endl;

    return 0;
}


//number 2
#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Введите количество строк и столбцов: " << endl;
    cin >> n >> m;

    int array[n][m];



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Введите значение массива для Строки " << i << " и Столбца " << j << ": ";
            cin >> array[i][j];
        }
    }

    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < n; i++) {
        int proizved = 1; 
        
        
        for (int j = 0; j < m; j++) {
            if (array[i][j] > 0) {
                proizved *= array[i][j];
                break;
          
            
        }

                cout << "Произведение положительных элементов в строке " << i << ": " << proizved << endl;
    }

    return 0;
    }


//number 3
#include <iostream>

using namespace std;

int main() {
    int n, m;
    int total_sum = 0; 

    cout << "Введите количество строк и столбцов: " << endl;
    cin >> n >> m;

    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Введите значение массива для Строки " << i << " и Столбца " << j << ": ";
            cin >> array[i][j];
        }
    }

    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < n; i++) {
        int row_sum = 0;

        for (int j = 0; j < m; j++) {
            if (array[i][j] < 0) {
            }
            row_sum += array[i][j];
        }
            cout << "Сумма строки " << i << ": " << row_sum << endl;

    return 0;
    }

//number 4
#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Введите количество строк и столбцов: " << endl;
    cin >> n >> m;

    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Введите значение массива для Строки " << i << " и Столбца " << j << ": ";
            cin >> array[i][j];
        }
    }

    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    for (int j = 0; j < m; j++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (array[i][j] < 0) {
            }
            sum += array[i][j];
        }
            cout << "Сумма столбца " << j << ": " << sum << endl;
   

    return 0;
    }


//number 5
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    int sum{};
    

    cout << "Введите количество строк и столбцов: " << endl;
    cin >> n >> m;

    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Введите значение массива для Строки " << i << " и Столбца " << j << ": ";
            cin >> array[i][j];
        }
    }



    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(i<j){
                sum+=abs(array[i][j]);
            
            
            }
        }
    }
    
    cout <<  "Сумма элементов выше главной диагонали: " << sum <<  endl;


    return 0;
}


//number 6
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    int num_str;
    

    cout << "Введите количество строк и столбцов: " << endl;
    cin >> n >> m;

    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Введите значение массива для Строки " << i << " и Столбца " << j << ": ";
            cin >> array[i][j];
        }
    }



    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(array[i][j] > 0){
                num_str = i;
                break;
            }
        }
    }
    
    cout <<  "Номер первой строки ,содержащей хотя бы 1 положительный элемент " << num_str <<  endl;

    return 0;
}


//number 7
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    int num_stolb;
    

    cout << "Введите количество строк и столбцов: " << endl;
    cin >> n >> m;

    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Введите значение массива для Строки " << i << " и Столбца " << j << ": ";
            cin >> array[i][j];
        }
    }



    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    
    
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if(array[i][j] < 0){
                break;
            }else {
                num_stolb = j;
                break;
            }
        }
    }
    
    cout <<  "Номер первого из столбцов не содержащего ни одного отрицательного элемента  " << num_stolb <<  endl;

    return 0;
}
