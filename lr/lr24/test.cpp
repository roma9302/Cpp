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
        start_point(start_point), finish_point(finish_point), num_marsh(num_marsh) 
    {
        cout << "Вызов конструктора с параметрами" << endl;
    }

    Marsh() 
    {
        start_point = "Undefined";
        finish_point = "Undefined";
        num_marsh = 0;
        cout << "Вызов конструктора по умолчанию" << endl;
    }

    Marsh(const Marsh& p)
    {
        start_point = p.start_point;
        finish_point = p.finish_point;
        num_marsh = p.num_marsh;
        cout << "Вызов конструктора копирования" << endl;
    }

    ~Marsh() 
    {
        cout << "Вызов деструктора" << endl;
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
            << "Финишная точка: " << finish_point << " "
            << "Номер маршрута: " << num_marsh << " " << endl;
    }


    void show_info_finish(int input_keyboard) const
    {
        if (input_keyboard == num_marsh)
        {
            cout << "Конечная точка: " << finish_point << endl;
        }
    }

};


class Bilet : public Marsh 
{
private:
    int count_place;
    int price_ticket;

public:
    Bilet(string start_point, string finish_point, int num_marsh,int count_place, int price_ticket):
        Marsh(start_point, finish_point, num_marsh), count_place(count_place), price_ticket(price_ticket)
    { 
        cout << "Вызов конструктора с параметром дочернего класса" << endl;
    }

    Bilet() : Marsh()
    {
        count_place = 0;
        price_ticket = 0;
        cout << "Вызов конструктора по умолчанию для дочернего класса" << endl;
    }

    Bilet(const Bilet& p) : Marsh() 
    {
        count_place = p.count_place;
        price_ticket = p.price_ticket;
        cout << "Вызов конструктора копирования для дочернего класса" << endl;
    }

    ~Bilet() 
    {
        cout << "Вызов деструктора для дочернего класса " << endl;
    }

    void setCount_place(const int& newCount_place)
    {
        count_place = newCount_place;
    }
    
    void setPrice_ticket(const int& newPrice_ticket)
    {
        price_ticket = newPrice_ticket;
    }

    int getCount_place() const
    {
        return count_place;
    }
    
    int getPrice_ticket() const
    {
        return price_ticket;
    }

    void show_child() const
    {
        Marsh::show();
        cout << "Количество мест: " << count_place << endl;
        cout << "Стоимость билета: " << price_ticket << endl;
    }


    void input_child() 
    {
        string st_pt;
        string fh_pt;
        int nm_ch;
        int price_tk;
        int ct_place;

        cout << "Введите значения для стартовой точки: " << endl;
        cin >> st_pt;
        cout << "Введите значение для финальной точки: " << endl;
        cin >> fh_pt;
        cout << "Введите значение для номера маршрута: " << endl;
        cin >> nm_ch;
        cout << "Введите значение количества мест: " << endl;
        cin >> price_tk;
        cout << "Введите значение для стоимости билета" << endl;
        cin >> ct_place;
        setStart(st_pt);
        setFinish(fh_pt);
        setNum_marsh(nm_ch);
        setCount_place(ct_place);
        setPrice_ticket(price_tk);

    }

};

int main() 
{
    setlocale(LC_ALL, "RU");

    int num_marsh_keyboard;
    Marsh tickets[3] = {
           Marsh("Рома", "стим", 71),
           Marsh("гоша", "гостинг", 83),
           Marsh("Лиана", "Гослинг", 93)
    };

    Bilet ticketss[3] = {
           Bilet("Рома", "стим", 71,34,3),
           Bilet("гоша", "гостинг", 83,34,2),
           Bilet()
    };

    cout << "Все обьекты" << endl;
    for (int i = 0; i < 3; i++)
    {
        tickets[i].show();
    }

    cout << "Изменение начальной точки 1 объекта" << endl;
    tickets[0].setStart("финиш");

    cout << "Получение начальной точки 2 объекта" << endl;
    tickets[1].getStart();


    cout << "Все обьекты" << endl;
    for (int i = 0; i < 3; i++)
    {
        tickets[i].show();
    }

    cout << "Введите номер маршрута: " << endl;
    cin >> num_marsh_keyboard;

    for (int i = 0; i < 3; i++)
    {
        tickets[i].show_info_finish(num_marsh_keyboard);
    }

    cout << "Вывод обьектов дочернего класса: " << endl;
    for (int i = 0; i < 3; i++)
    {
        ticketss[i].show_child();
    }

    ticketss[1].input_child();
    cout << "Пример ввода с клавиатуры: " << endl;
    ticketss[1].show_child();

    cout << "Вывод через указатели на объекты класса: " << endl;
    Marsh* pw1 = &tickets[0];
    Marsh* pw2 = &tickets[1];
    Marsh* pw3 = &tickets[2];

    pw1->show();
    pw2->show();
    pw3->show();

    return 0;
}
