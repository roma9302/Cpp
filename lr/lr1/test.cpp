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
#include <math.h> 
#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double z1, z2, x, y, pi = 3.1415926;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
	z2 = sin(y + x) * sin(y - x);
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
}

//number 3
#include <math.h> 
#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double z1, z2, a,  pi = 3.1415926;
	cout << "a=";
	cin >> a;
	z1 = (sin(pi / 2 + 3 * a)) / (1 - sin(3 * a - pi));
	z2 = 1 / tan(1.25 * pi + 1.5 * a);
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
	
}

//number 4
#include <math.h> 
#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double z1, z2, a,  pi = 3.1415926;
	cout << "a=";
	cin >> a;
	z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));
	z2 = 1 / tan(1.5 * pi - a);
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
	
}

//number 5
#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x = 2.444, y = 0.869 * pow(10, -2), z = -0.13 * pow(10, 3), h1, h2, pi = 3.1415926;
	h1 = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z))) * (1 + fabs(y - x)) + (pow(fabs(y - x), 2) / 2) - (pow(fabs(y - x), 3) / 3);
	cout << "Пример 1:" << h1 << endl;

}

//number 6
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x = 3.251, y = 0.325, z = 0.466 * pow(10, -4), h2, pi = 3.1415926;;
	h2 = pow(2, (pow(y, x))) + pow((pow(3, x)), y) - (y * (atan(z) - pi / 6)) / (fabs(x) + (1 / (pow(y, 2) + 1)));
	cout << "Пример 2:" << h2;
}
