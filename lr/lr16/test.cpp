#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
 
 
struct person
{
    char fio[20];
    int year;
    int group;
    int matem[1];
    int fizika[1];
    int inform[1];
    int ximia[1];
    float average(){
        return(matem[0] + fizika[0]+ ximia[0]+inform[0]) / 4;
    }
};

int main(){
    int gr;
    float average_group=0;
    person stud[3];
    for(int i{}; i<3;i++){
        cout << "Введите фио студента" << i +1 <<  endl;
        cin >> stud[i].fio;
        cout << "Введите год рождения" <<i+1 << endl;
        cin >> stud[i].year;
        cout << "Введите №группы студента " <<i+1 << endl;
        cin >> stud[i].group;
        cout << "Введите оценку по физике "<<i+1 << endl;
        cin >> stud[i].fizika[0];
        cout << "Введите оценку по математике "<<i+1 << endl;
        cin >> stud[i].matem[0];
        cout << "Введите оценку по химии " <<i+1 << endl;
        cin >> stud[i].ximia[0];
        cout << "Введите оценку по информатике " <<i+1 << endl;
        cin >> stud[i].inform[0];
    }
    
    cout << "Введите группу  интересующую вас " << endl;
    cin >> gr;
    for(int i {}; i<3;i++){
        average_group += stud[i].average();
    }
        cout << "Общий средний балл всех студентов "<< average_group/3 << endl;
        
    for(int i {}; i<3;i++){
        if(stud[i].group == gr){
            if(stud[i].average()> average_group / 3){
                cout <<"У него оценка выше средней " << stud[i].fio << endl;
                cout << "Его Балл " << stud[i].average() << endl;
            }
            
        }
    }
    return 0;
    
}

