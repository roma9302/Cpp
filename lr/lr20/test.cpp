#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Customer {
private:
	string name;
	string surname;
	string fathername;
	string address;
	int  phone;
	long long int card;
	int num_chet;

public:
	Customer(string name, string surname, string fathername, string address, int  phone,  long long int  card,  int num_chet) :
		name(name), surname(surname), fathername(fathername), address(address), phone(phone), card(card), num_chet(num_chet) {
	}


	void setName(const string& newName) {
		name = newName;
	}
	void setSurname(const string& newSurname) {
		surname = newSurname;
	}
	void setFathername(const string& newFathername) {
		fathername = newFathername;
	}
	void setAddress(const string& newAddress) {
		address = newAddress;
	}
	void setPhone(const int& newPhone){
		phone = newPhone;
	}
	void setCard(const long long int& newCard) {
		card = newCard;
	}
	void setNum_chet(const int& newNum_chet) {
		num_chet = newNum_chet;
	}


	string getName() const {
		return name;
	}
	string getSurname() const {
		return surname;
	}
	string getFathername() const {
		return fathername;
	}
	string getAddress() const {
		return address;
	}
	int getPhone() const {
		return phone;
	}
	long long int getCard() const {
		return card;
	}
	int getNum_chet() const {
		return num_chet;
	}


	void show() const {
		cout << "Имя: " << name << " "
			<< "Фамилия: " << surname << " "
			<< "Отчество: " << fathername << " "
			<< "Адрес: " << address << " "
			<< "Телефон: " << phone << " "
			<< "Номер карты: " << card << " "
			<< "Счет карты: " << num_chet << endl;
	}

};


	

int main() {
	setlocale(LC_ALL, "RU");
	long long int min_interval;
        long long int max_interval;
	Customer customers[4] = {
		Customer("Рома", "стим", "олегович", "воронянского 78 дом 3", 634834834, 4543567845332345, 1),
		Customer("гоша", "гостинг", "либронович", "Пушкинская 844 дом 1",5635876359873 , 6745234567892311, 2),
		Customer("антон", "пушкин", "Вячеславович", "Жуковского 23 дом 43", 49463984, 1234557788993422, 3),
		Customer("Лиана", "Гослинг", "Олеговна", "держинского 211 дом 211", 4346734 , 6677556633452345, 4)
	};

	cout << "Изменен номер телефона для элемента 0" << endl;
	customers[0].setPhone(738338);

	cout << "Новый номер телефона для элемта 0" << endl;
	cout << customers[0].getPhone();
	cout << endl;

	cout << "Вывод всей инфо для элемента 0" << endl;
	customers[0].show();


	cout << "Без сортировки " << endl;
	for (int i{}; i < 4; i++) {
		customers[i].show();
	}


	 sort(customers, customers + 4, [](const Customer& a, const Customer& b) {
        return a.getSurname() < b.getSurname();
    });


    cout << "С сортировкой" << endl;
	for (int i{}; i < 4;i++) {
        customers[i].show();
    }

	cout << "Введите значение минимума интервала" << endl;
	cin >> min_interval;

	cout << "Введите значение максимаму интервала" << endl;
	cin >> max_interval;


	cout << "Элементы подходящие под запрос" << endl;
	for (int i{}; i < 4; i++) {
		if (customers[i].getCard() >= min_interval && customers[i].getCard() <= max_interval) {
			customers[i].show();
		}
	}


	return 0;
}
