#include <iostream>
#define MAX 10
using namespace std;
class queue
{
private:
    int rear;
    int front;
    int arr[MAX];

public:
    queue()
    {
        rear = 0;
        front = -1;
    }
    bool isempty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return (front == 0 && rear == MAX - 1) || front == rear + 1;
    }
    int first()
    {
        if (isempty())
            cout << "empty";
        else
            return arr[front];
    }
    int last()
    {
        if (isempty() || rear < 0)
            cout << "empty";
        else
            return arr[rear];
    }
    void insertFirst(int obj)
    {
        if (isFull())
        {
            cout << "overflow";
            return;
        }
        if (isempty())
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0)
        {
            front = MAX - 1;
        }
        else
        {
            --front;
        }
        arr[front] = obj;
    }
    void insertLast(int obj)
    {
        if (isFull())
        {
            cout << "full";
            return;
        }
        if (isempty())
        {
            front = 0;
            rear = 0;
        }
        else if (rear == MAX - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = obj;
    }
    void removeFirst()
    {
        if (isempty())
        {
            cout << "empty";
            return;
        }
        cout << arr[front]<<endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == MAX - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void removeLast()
    {
        if (isempty())
        {
            cout << "empty";
            return;
        }
        cout << arr[rear]<<endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = MAX - 1;
        }
        else
        {
            --rear;
        }
    }
    void display()
    {
        if (!isempty())
        {
            if (front <= rear)
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            else
            {
                for (int i = front - (MAX); i <= rear; i++)
                {
                    int temp = (i + MAX) % (MAX);
                    cout << arr[temp] << " ";
                }
            }
        }
    }
};
int main()
{
    queue q;
    int n = 1, c, o;

    while (n == 1)
    {
        cout << "\n1.insertF 2.insL 3.removF 4.removL\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cin >> o;
            q.insertFirst(o);
            q.display();
            break;
        case 2:
            cin >> o;
            q.insertLast(o);
            q.display();

            break;
        case 3:
            q.removeFirst();
            q.display();
            break;
        case 4:
            q.removeLast();
            q.display();
            break;
        case 5:
            n = 0;
        }
    }
}