#include<iostream>
#include<queue>
using namespace std;



int main(){
    queue<int> numbers;
    queue<string> alphabets;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    while(!numbers.empty()){
        cout << numbers.front() << " ";
        numbers.pop();
    }
    
    return 0;
}



/*
    queue operations are ->
    PUSH, POP, FRONT, BACK, ISEMPTY, SIZE
    https://www.programiz.com/cpp-programming/queue
*/