#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int val) : val(val), next(nullptr) {}
};

struct list {
    Node* first;
    Node* last;

    list() : first(nullptr), last(nullptr) {}

    bool is_empty() 
    {
        return first == nullptr;
    }
    
    ~list()
    {
        while (first) 
        {
            Node* temp = first;
            first = first->next;
            delete temp; 
        }
    }

    void push_back(int val) 
    {
        Node* p = new Node(val);
        if (is_empty()) 
        {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    void print() {
        if (is_empty()) return;
        Node* p = first;
        while (p) 
        {
            cout << p->val << " ";
            p = p->next;
        }
        cout << endl;
    }
    
    
    void sorted_bubble() 
    {
        if (is_empty()) return;


        int count = 0;
        Node* p = first;
        
        while (p) 
        {
            count++;
            p = p->next;
        }

        int* array = new int[count];
        p = first;

        
        for (int i = 0; i < count; i++) 
        {
            array[i] = p->val;
            p = p->next;
        }

        
        for (int i = 0; i < count - 1; i++) 
	{
            for (int j = 0; j < count - i - 1; j++) 
            {
                if (array[j] > array[j + 1]) 
                {
                    std::swap(array[j], array[j + 1]);
                }
            }
        }

        
        p = first;
        for (int i = 0; i < count; i++) 
        {
            p->val = array[i];
            p = p->next;
        }

        delete[] array;
    }
    
    
    void sorted_choice()
    {
        if (is_empty()) return;

        
        int count = 0;
        Node* p = first;
        
        while (p) 
        {
            count++;
            p = p->next;
        }

        int* array = new int[count];
        p = first;

        
        for (int i = 0; i < count; i++) 
        {
            array[i] = p->val;
            p = p->next;
        }
        
        for (int start = 0; start < count - 1; ++start)
	{
		int small = start;
		    
		    for (int current = start + 1; current < count; ++current)
		    {
			    if (array[current] < array[small])
                            {
				small = current;
                            }    
		    }
		std::swap(array[start], array[small]);
        }
        
        p = first;
        for (int i = 0; i < count; i++) 
        {
            p->val = array[i];
            p = p->next;
        }

        delete[] array;
	}
    
    
    void sorted_insert(){
        if (is_empty()) return;

        int count = 0;
        Node* p = first;
        
        while (p) 
        {
            count++;
            p = p->next;
        }

        int* array = new int[count];
        p = first;

        
        for (int i = 0; i < count; i++) 
        {
            array[i] = p->val;
            p = p->next;
        }
        
        
        for(int i=1; i<count; i++)
        {     
	        for(int j=i; j>0 && array[j-1]>array[j]; j--)
                {
	             swap(array[j-1],array[j]);        
                 }
        }
        
        p = first;
        for (int i = 0; i < count; i++) 
        {
            p->val = array[i];
            p = p->next;
        }

        delete[] array;
    }    
    
};

int main() {

    list l;
    int n;
    
    cout << "Ввведите количество элементов." <<endl;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int num;
        cout << "Введите элемент";
        cin >> num;
        
        l.push_back(num);
    }
    
    l.sorted_insert();
    l.print();
    
    
    list a;
    
    std::ifstream in("al.txt");
    std::string line;

    int array[6];
    
    int count = 0;
    while (std::getline(in, line)) 
    {
        array[count] = std::stoi(line);
        count++;
    }
    
    for(int i = 0; i<6; i++)
    {
        a.push_back(array[i]);
    }
    
    
    a.sorted_bubble();
    a.print();
    
    
    list b;
    b.push_back(3);
    b.push_back(12);
    b.push_back(5);
    b.push_back(2);
    b.push_back(3);
    b.push_back(6);
    b.push_back(8);
    b.push_back(4);
  
    b.sorted_choice();
    
    b.print();
    
    return 0;
}
