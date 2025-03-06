#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Marsh {

private:
	string start_point;
	string finish_point;
	int num_marsh;
	
    
public:
	Marsh(string start_point, string finish_point, int num_marsh) :
		start_point(start_point), finish_point(finish_point), num_marsh(num_marsh) {
	}
    
    
	void setStart(const string& newStart) 
    {
		start_point = newStart;
	}
    
	void setFinish(const string& newFinish) 
    {
		finish_point = newFinish;
	}
    
	void setNum_marsh(const int& newNum_marsh) 
    {
		num_marsh = newNum_marsh;
	}


	string getStart() const
    {
		return start_point;
	}
    
    string getFinish() const 
    {
		return finish_point;
	}
    
    int getNum_marsh() const 
    {
		return num_marsh;
	}
    
    
    void show() const
    {
        cout << "Начальная точка: " << start_point << " "
			<< "Финишная точка: " << finish_point<< " "
			<< "Номер маршрута: " << num_marsh << " " << endl;
    }
    
    
    void show_info_finish(int input_keyboard) const
    {
        if(input_keyboard == num_marsh)
        {
            cout << "Конечная точка: " << finish_point << endl;
        }
    }
    
 };
 
 
 int main(){
 
     int num_marsh_keyboard;
     Marsh tickets[3] = {
			Marsh("Рома", "стим", 71),
			Marsh("гоша", "гостинг", 83),
			Marsh("Лиана", "Гослинг", 93)
	};
    
    cout << "Все обьекты" << endl;
    for(int i = 0; i<3; i++)
    {
        tickets[i].show();
    }
    
    cout << "Изменение начальной точки 1 объекта" << endl;
    tickets[0].setStart("финиш");
    
    cout << "Получение начальной точки 2 объекта" << endl;
    tickets[1].getStart();
    
    
    cout << "Все обьекты" << endl;
    for(int i = 0; i<3; i++)
    {
        tickets[i].show();
    }
    
    cout << "Введите номер маршрута: " << endl;
    cin >> num_marsh_keyboard;
    
    for(int i = 0; i<3; i++)
    {
        tickets[i].show_info_finish(num_marsh_keyboard);
    }
    
    
    cout << "Вывод через указатели на объекты класса: " << endl;
    Marsh *pw1 = &tickets[0];
    Marsh *pw2 = &tickets[1];
    Marsh *pw3 = &tickets[2];
    
    pw1->show();
    pw2->show();
    pw3->show();
    
     return 0;
 }
 
 
