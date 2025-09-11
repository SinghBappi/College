#include <iostream>

using namespace std;
#define maxi 5
struct Queue
{
    int arr[maxi];
    
    int rear;
    int front;
    Queue()
    {
        rear = front = -1;
    }
    void enqueue(int val)
    {
        if (front == -1)
            front = 0;
        if (rear == maxi - 1)
        {
            cout << "Full" << endl;
            return;
        }
        else
        {
            ++rear;
            arr[rear] = val;
            cout << "Inserted:" << arr[rear] << endl;
        }
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "Empty" << endl;
            return;
        }
        else
        {
            cout << "Done and now front is :" << arr[front] << endl;
            front++;
        }
    }
    void peek()
    {
        if (front == -1)
        {
            cout << "Empty" << endl;
            return;
        }
        else
        {
            cout << "front is :" << arr[front] << endl;
        }
    }
    void display()
    {
        if (front == -1)
        {
            cout << "Empty" << endl;
            return;
        }
        else
        {
            cout << "Display function:";
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};
int main()
{
    //  Your code here
    Queue p;
    p.enqueue(5);
    p.enqueue(10);
    p.enqueue(15);
    p.enqueue(20);
    p.display();
    p.dequeue();
    p.peek();
    p.display();

    return 0;
}