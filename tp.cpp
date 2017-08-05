#include <iostream>
#include <typeinfo>

using namespace std;

struct Node {
    int data;
    Node *next;
};

struct Node *head = new Node;

void Insert(int data);
void Print();

int main ()
{
    Insert(3);
    Insert(4);
    Insert(5);
    Print();

    return 0;
}

void Insert(int data)
{
    struct Node *temp = new Node ;
    temp->data = data ;
    temp->next = NULL ;

    if (head->data == NULL)
        head = temp ;
    else
    {
        while (temp != NULL)
        {
            head->next = temp ;
            temp = temp->next;
        }
    }
}

void Print()
{
    struct Node *temp = new Node;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data;
        cout << "\n";
        temp = temp->next;
    }
}
