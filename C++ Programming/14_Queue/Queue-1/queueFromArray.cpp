#include <iostream>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f = 0;
        b = 0;
    }
    void push(int val){
        if(b==5){
            cout<<"Queue is FULL!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout<<"Queue is EMPTY!"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(f-b==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f-b==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(f-b==0) return true;
        else return false;
    }
    void display(){
        for(int i=0; i<b-f; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl; 
    }
};
int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
    q.display();
    q.pop();
    q.display();
}