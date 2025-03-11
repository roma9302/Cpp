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


class Bilet : public Marsh {

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



class Client  {

private:
    string num_pasport;
    int count_travel;
    

public:
    Client(string num_pasport,int count_travel) :
        num_pasport(num_pasport), count_travel(count_travel)
    {
        cout << "Вызов конструктора с параметрами для Client" << endl;
    }

    Client() 
    {
        num_pasport = "Undefined";
        count_travel = 0;
        cout << "Вызов конструктора по умолчанию для Client" << endl;
    }

    Client(const Client& p)
    {
        num_pasport = p.num_pasport;
        count_travel = p.count_travel;
        cout << "Вызов конструктора копирования для Client" << endl;
    }

    ~Client() 
    {
        cout << "Вызов деструктора  для Client" << endl;
    }
    
    
    void setNum_pasport(const string& newNum_pasport)
    {
        num_pasport = newNum_pasport;
    }
    
    void setCount_travel(const int& newCount_travel)
    {
        count_travel = newCount_travel;
    }

    string getNum_pasport() const
    {
        return num_pasport;
    }
    
    int getCount_travel() const
    {
        return count_travel;
    }
    
    
    void input_client()
    {
        string num_paspt;
        int count_trvl;
        
        cout << "Введите номер паспорта: " << endl;
        cin >> num_paspt;
        cout << "Введите количество поездок: " << endl;
        cin >> count_trvl;
        
        setNum_pasport(num_paspt);
        setCount_travel(count_trvl);
    }
    
    void output_client() const 
    {
        cout << "Номер паспорта: " << num_pasport << endl;
        cout << "Количесто поездок: " << count_travel <<  endl;
    }
    
};



class Akcia: public Bilet, public Client {

public:
    Akcia(string start_point, string finish_point, int num_marsh,int count_place, int price_ticket,string num_pasport,int count_travel):
        Bilet(start_point,finish_point,num_marsh,count_place, price_ticket),Client(num_pasport,count_travel)
    { 
        cout << "Вызов конструктора с параметром дочернего класса Akcia" << endl;
    }
    
    Akcia() : Bilet(),Client()
    {
        cout << "Вызов конструктора по умолчанию для Akcia" << endl;
    }
    
    Akcia(const Akcia& p): Bilet(),Client() 
    {
        cout << "Вызов конструктора копирования для Akcia" << endl;
    }
    
    ~Akcia()
    {
        cout << "Вызов деструктор а для Akcia" << endl;
    }
    
    
    void free_every_ten() const 
    {
        if(Client::getCount_travel()  % 10 == 0 )
        {
            cout << "Ваша поездка 10, каждые 10 поездок - одна бесплатная." << endl;
            show_about();
        }
    }
    
    void show_about() const
    {
        Bilet::show_child();
        Client::output_client();
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

  
    Client clients[3]{
        Client("A221548HH",6),
        Client("A7S2JSHSHDH",8),
        Client()
    };
    
    
    Akcia akcias[3]{
        Akcia("гоша", "гостинг",83,34,2,"hdhdh",50),
        Akcia(),
        Akcia()
    };
    
    clients[1].input_client();
    clients[1].output_client();
    
    akcias[0].show_about();
    akcias[0].free_every_ten();
    
    

    return 0;
}
