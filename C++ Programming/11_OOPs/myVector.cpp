#include <iostream>
#include <vector>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i]; 
            }
            arr = arr2;
        }
        arr[size] = ele;
        size++;
    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int idx){
        if(idx >= size || idx<0){
            cout<<"Invalid Index  ";
            return -1;
        }
        if(size == 0){
            cout<<"Empty Array  ";
            return -1;
        }
        return arr[idx];
    }
};
int main() {
    Vector v1;
    v1.add(15);
    cout<<v1.size<<" "<<v1.capacity<<endl; 
    v1.print();
    v1.add(11);
    cout<<v1.size<<" "<<v1.capacity<<endl; 
    v1.print();
    v1.add(9);
    cout<<v1.size<<" "<<v1.capacity<<endl; 
    v1.print();
    v1.add(5);
    cout<<v1.size<<" "<<v1.capacity<<endl; 
    v1.print();
    v1.add(12); 
    cout<<v1.size<<" "<<v1.capacity<<endl;
    v1.print();

    cout<<v1.get(11);
}