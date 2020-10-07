#include <iostream>
using namespace std;


template <class T> class Node
{
public:
    T data;
    Node<T> *next;
    Node<T> *prev;
};

template <class T> class LinkedList
{
    Node<T> *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insert(T val)
    {
        //--
        Node<T> *newNode = new Node<T>;
        newNode->data = val;
        newNode->next = NULL;
        //--
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    bool search(T val)
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void remove(T val)
    {

        if (head->data == val)
        {
            if (head->next == NULL)
            {
                delete head;
                cout << "removed";
                head = NULL;
                return;
            }
            else
            {
                Node<T> *tPtr = head->next;
                delete head;
                cout << "removed";
                head = tPtr;
                return;
            }
        }
        Node<T> *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->data == val)
            {
                Node<T> *tPtr = temp->next->next;
                delete temp->next;
                cout << "removed";
                temp->next = tPtr;
                return;
            }
            temp = temp->next;
        }
        cout << "failed to find the given element";
    }
    void display()
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
    void reverse()
    {
        Node<T> *cur = head;
        Node<T> *prev = NULL;
        Node<T> *next = NULL;
        while (cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
    }
    friend void concat(LinkedList l1, LinkedList l2)
    {
        Node<T> *temp = l1.head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = l2.head;
    }
};
int main()
{
    LinkedList<int> l;
    int x = 0, ch;
    int in;
    while (x == 0)
    {
        cout << "\n1.Insert  2.search  3.remove  4.display  5.reverse  6.concat  7.exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin >> in;
            l.insert(in);
            break;
        case 2:
            cin >> in;
            if (l.search(in))
                cout << "element found";
            else
                cout << "failed to find element";
            break;
        case 3:
            cin >> in;
            l.remove(in);
            break;
        case 4:
            l.display();
            break;
        case 5:
            l.reverse();
            l.display();
            break;
        case 6:
        {
            LinkedList<int> l2;
            l2.insert(1);
            l2.insert(2);
            l2.insert(3);
            l2.insert(4);
            l2.insert(5);
            cout << "here is the second linked list: \n";
            l2.display();
            concat(l, l2);
            cout << "after concatenation:\n";
            l.display();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}