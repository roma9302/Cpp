#include <iostream>
#include <ctime>

using namespace std;

struct Node
{
    int x;
    Node* next;
    Node* prev;
    Node(int x) : x(x), next(nullptr), prev(nullptr) {}
};

class List
{
    Node* head, * tail;
public:
    List() :head(nullptr), tail(nullptr) {};
    ~List();
    void Show();
    void Add(int x);
    void delete_repeat(int len);
};

List::~List()
{
    while (head)
    {
        tail = head->next;
        delete head;
        head = tail;
    }
}

void List::Add(int x)
{
    Node* temp = new Node(x);
    temp->next = nullptr;
    temp->x;

    if (head != nullptr)
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    else
    {
        temp->prev = nullptr;
        head = tail = temp;
    }
}

void List::Show()
{

    Node* temp = tail;
    while (temp != nullptr)
    {
        cout << temp->x << " ";
        temp = temp->prev;
    }
    cout << endl;

    temp = head;
    while (temp != nullptr)
    {
        cout << temp->x << " ";
        temp = temp->next;
    }
    cout << endl;
}

void List::delete_repeat(int len)
{
    int* numbers = new int[len];
    int count = 0;

    Node* temp = tail;

    while (temp != nullptr)
    {
        numbers[count] = temp->x;
        temp = temp->prev;
        count++;
    }

    List::~List();

    int* arr_uniq = new int[len];
    int count_uniq = 0;

    int* count_on_num = new int[len]();

    for (int i = 0; i < count; ++i)
    {
        count_on_num[numbers[i]]++;
    }

    for (int i = 0; i < count; ++i)
    {
        if (count_on_num[numbers[i]] == 1)
        {
            arr_uniq[count_uniq] = numbers[i];
            count_uniq++;
        }
    }

    for (int i = 0; i < count_uniq; i++)
    {
        List::Add(arr_uniq[i]);
    }

    delete[] numbers;
    delete[] arr_uniq;
    delete[] count_on_num;
}




int main()
{
    srand(time(0));
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
    }

    List lst;
    lst.Add(arr[0]);
    lst.Add(arr[1]);
    lst.Add(arr[2]);
    lst.Add(arr[3]);
    lst.Add(arr[4]);
    lst.Add(arr[5]);
    lst.Add(arr[6]);
    lst.Add(arr[7]);
    lst.Add(arr[8]);
    lst.Add(arr[9]);
    lst.Show();
    lst.delete_repeat(10);

    lst.Show();

    return 0;
}
