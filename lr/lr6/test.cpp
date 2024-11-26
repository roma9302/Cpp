//number 1
#include <iostream> 


using namespace std;

int main() {
    const int n = 10;
    int monesy[n]{};
    int positiveNumbers[n]{};
    int minusCount = 0;
    int positiveCount = 0; 

    for (int i = 0; i < n; i++) {
        int num = (-10) + rand() % ((10) - (-10) + 1);
        monesy[i] = num;
        cout << monesy[i] << endl;

        if (monesy[i] < 0) {
            minusCount++;
        }
        else if (monesy[i] > 0) {
            positiveNumbers[positiveCount] = monesy[i] * 10; 
            positiveCount++; 
        }
    }

    cout << "Negative numbers count: " << minusCount << endl;

    cout << "number * : ";
    for (int i = 0; i < positiveCount; i++) {
        cout << positiveNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
