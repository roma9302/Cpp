//number 1
#include <math.h> 
#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double z1, z2, a, pi = 3.1415926;
    cout << "a=";
    cin >> a;
    z1 = 2 * pow(sin(3 * pi - 2 * a), 2) * pow(cos(5 * pi + 2 * a), 2);
    z2 = 0.25 - 0.25 * sin(2.5 * pi - 8 * a);
    cout << "z1=" << z1 << endl;
    cout << "z2=" << z2 << endl;
}

//number 2
