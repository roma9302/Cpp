#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
struct MARSH
{
    char BEGST[20];
    char TERM[20];
    int	NUMER;
};

int main(){
    string point;
    float marker = false;
    MARSH TRAFIC[8];
    for(int i{}; i<8;i++){
        cout << "название начального пункта маршрута " << i +1 <<  endl;
        cin >> TRAFIC[i].BEGST;
        cout << "название конечного пункта маршрута " << i +1 <<  endl;
        cin >> TRAFIC[i].TERM;
        cout << "номер маршрута " << i +1 <<  endl;
        cin >> TRAFIC[i].NUMER;
    }
    
    cout << "введите название конечного или начального пункта для вывода инфо о нем "  << endl;
    cin >> point;
    
    for(int i{}; i<8;i++){
        if(point == TRAFIC[i].BEGST || point == TRAFIC[i].TERM){
        cout << "Ваш маршрут начинается с  "  <<  TRAFIC[i].BEGST << endl;
        cout << "Заканчивается на "  << TRAFIC[i].TERM <<endl;
        cout <<"Номер маршрута " << TRAFIC[i].NUMER  <<  endl;
        marker = true;
        }
    }
    
     if(marker == false){
            cout << "Нет заданного пункта в базе" << endl;
        }
    
}
