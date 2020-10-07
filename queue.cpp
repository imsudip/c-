#include <iostream>
#define MAX 3
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
        rear = -1;
        front = -1;
    }
    bool isempty()
    {
        return front == -1;
    }
    void enqueue(int obj)
    {
        if ((front == 0 && rear == MAX - 1) ||
            (rear == (front - 1)))
        {
            cout<<"\nQueue is Full";
            return;
        }

        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = obj;
        }

        else if (rear == MAX - 1 )
        {
            rear = 0;
            arr[rear] = obj;
        }

        else
        {
            rear++;
            arr[rear] = obj;
        }
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "\nQueue is Empty";
        }

        cout << arr[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == MAX - 1)
            front = 0;
        else
            front++;
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

    while (n = 1)
    {
        cout << "\n1.enq 2.deq 3.display\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cin >> o;
            q.enqueue(o);
            q.display();
            break;
        case 2:
            q.dequeue();
            q.display();
            break;
        case 3:
            q.display();
            break;
        case 4:
            n = 0;
        }
    }
}