#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct person {
    char fio[20];
    int year;
    int group;
    int matem;
    int fizika;
    int inform;
    int ximia;

    float average() {
        return (matem + fizika + ximia + inform) / 4.0; 
    }
};

void create_file(person stud[]) {
    ofstream out("bio.txt", ios::app);
    if (out.is_open()){
        for (int i = 0; i < 3; i++) {
            out << "Фамилия: " << stud[i].fio << " "
                << "Группа: " << stud[i].group << " "
                << "Год рождения: " << stud[i].year << " "
                << "Физика: " << stud[i].fizika << " "
                << "Математика: " << stud[i].matem << " "
                << "Химия: " << stud[i].ximia << " "
                << "Информатика: " << stud[i].inform << endl;
        }
    }
    out.close();
}


void open_file() {
    string line;
    ifstream in("bio.txt");
    if (in.is_open()) {
        while (getline(in, line)) {
            cout << line << endl;
        }
        in.close();
    }
}


void exc(person stud[]) {
    int gr;
    float average_group = 0;
    cout << "Введите группу, интересующую вас: ";
    cin >> gr;

    for (int i = 0; i < 3; i++) {
        average_group += stud[i].average();
    }
    average_group /= 3; 

    cout << "Общий средний балл всех студентов: " << average_group << endl;

    for (int i = 0; i < 3; i++) {
        if (stud[i].group == gr) {
            if (stud[i].average()  > average_group) {
                ofstream out("grade.txt", ios::app);
                if (out.is_open()){
                        out << "У него оценка выше средней: " << stud[i].fio << " "
                        << "Его Балл: " << stud[i].average() << " ";
                }
            out.close();
            }
        } 
    }
}


int main() {
    person stud[3];
    for (int i = 0; i < 3; i++) {
        cout << "Введите ФИО студента " << i + 1 << " ";
        cin >> stud[i].fio;
        cout << "Введите год рождения " << i + 1 << " ";
        cin >> stud[i].year;
        cout << "Введите № группы студента " << i + 1 << " ";
        cin >> stud[i].group;
        cout << "Введите оценку по физике " << i + 1 << " ";
        cin >> stud[i].fizika;
        cout << "Введите оценку по математике " << i + 1 << " ";
        cin >> stud[i].matem;
        cout << "Введите оценку по химии " << i + 1 << " ";
        cin >> stud[i].ximia;
        cout << "Введите оценку по информатике " << i + 1 << " ";
        cin >> stud[i].inform;
    }
    
    while (true){
        int num;
        cout << "Введите номер взаимодейситвия 1)Создание файла 2)открытие файла 3)доп. задание 4)Завершить программу" << endl;
        cin >> num;
        if(num ==1){
            create_file(stud); 
        }else if(num == 2){
            open_file();   
        }else if(num == 3){
            exc(stud); 
        }else if(num == 4){
            break;
        }else{
            cout << "Введите правильное значение." << endl;
        }
    }
    
}
