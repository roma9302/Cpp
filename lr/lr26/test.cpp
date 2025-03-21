#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Node 
{
    string udk;
    string fio;
    string name;
    int year;
    int count_ex;
    Node* next;

    Node() : udk(""), fio(""), name(""), year(0), count_ex(0), next(nullptr) {}

    Node(string udk, string fio, string name, int year, int count_ex) : udk(udk), fio(fio), name(name), year(year), count_ex(count_ex), next(nullptr) {}
};

struct list 
{
    Node* first;
    Node* last;

    list() : first(nullptr), last(nullptr) {}

    bool is_empty() 
    {
        return first == nullptr;
    }

    void push_back(string udk, string fio, string name, int year,int count_ex) 
    {
        Node* p = new Node(udk,fio,name,year,count_ex);
        if (is_empty()) 
        {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    void push_front(string udk, string fio, string name, int year, int count_ex) 
    {
        Node* p = new Node(udk, fio, name, year, count_ex);
        if (is_empty()) 
        {
            first = p;
            last = p;
        }
        p->next = first; 
        first = p;       
    }

    void delete_book(string udk) 
    {
        if (is_empty()) return;

        Node* tek = first;
        Node* pred = nullptr;

        while (tek) {
            if (tek->udk == udk) 
            {
                if (!pred) 
                {
                    first = tek->next;
                    if (tek == last) last = nullptr;
                }
                else 
                {
                    pred->next = tek->next;
                    if (tek == last) last = pred;
                }
                delete tek;
                return; 
            }
            pred = tek;
            tek = tek->next;
        }
    }

    void push_sort(string udk, string fio, string name, int year, int count_ex) 
    {
        Node* p = new Node(udk, fio, name, year, count_ex);


        if (is_empty() || first->name > name) 
        {
            p->next = first;
            first = p;
            if (!last) last = p; 
            return;
        }

        Node* tek = first;
        while (tek->next && tek->next->name <= name) 
        {
            tek = tek->next;
        }


        p->next = tek->next;
        tek->next = p;

        if (!p->next) last = p; 
    }

    void print_sorted_year() 
    {
        if (is_empty()) 
        {
            return;
        }

        int count = 0;
        Node* p = first;

        while (p) 
        {
            p = p->next;
            count++;
        }

        Node* nodes = new Node[count];
        p = first;

        for (int i = 0; i < count; i++) 
        {
            nodes[i] = *p; 
            p = p->next;
        }

        sort(nodes, nodes + count, [](Node& a, Node& b) 
            {
            return a.year < b.year; 
            });


        for (int i = 0; i < count; i++) 
        {
            cout << "УДК: " << nodes[i].udk
                << " Автор: " << nodes[i].fio
                << " Название: " << nodes[i].name
                << " Год издания: " << nodes[i].year
                << " Количество экземпляров: " << nodes[i].count_ex
                << endl;
        }
        delete[] nodes;
    }

};

int main() 
{
    setlocale(LC_ALL, "RU");
    list l;
    l.push_back("eg","d","аа",3,3);
    l.push_back("бggr", "ва", "пуку", 1, 443);
    l.push_front("rgrв", "фыв", "уау", 2, 443);
    l.push_back("rgг", "вааы", "уауау", 4, 443);
    l.delete_book("rgrв");
    l.push_sort("аrgrбвg", "d44", "а", 44, 443);
    l.print_sorted_year();
    return 0;
}
