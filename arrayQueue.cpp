#include <iostream>
#include <string>   
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
        if( front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = data;
        }
        
        else if (!rear == MAX_SIZE)
        {
            arr[++rear] = data;
        }
    }

    void pop(){
        cout << arr[front] << endl;
        front++;
    }

    int fron()
    {
        cout << arr[front] << endl;
    }
    int back()
    {  
        cout << arr[rear] << endl;
    }

    string size()
    {
        if (rear == MAX_SIZE)
            return "Queue is full!";
        if (rear == -1)
            return "Queue is empty!";
        else
            return to_string(rear);

    }
};
int main()
{
    Queue numbers;

    // numbers.size();
    cout << numbers.size() << endl;

    return 0;
}