#include <iostream>
using namespace std;

class Queue
{
private:
    static const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int front, rear;

public:
    // constructor
    Queue() : front(-1), rear(-1) {}

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    void push(int data)
    {
        
        if (!rear == MAX_SIZE)
        {
            arr[++rear] = data;
        }
    }

    // void pop(){
    //     cout << arr[front] << endl;

    // }

    int front()
    {
    }
    int back()
    {
    }

    int size()
    {
        if (rear == MAX_SIZE)
            return rear;
        return MAX_SIZE - rear;
    }
};
int main()
{
    Queue numbers;

    cout << numbers.size() << endl;

    return 0;
}