#include <iostream>
#include <vector>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float cgpa;
};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.cgpa<<endl;
}
void change(Student s){
    s.name = "Himanshu";
}
int main() {
    Student s1;
    s1.name = "niket";
    s1.rno = 12;
    s1.cgpa = 6.5;

    Student s2;
    s2.name = "raghav";
    s2.rno = 32;
    s2.cgpa = 7.3;
    print(s1);
    change(s1);  // pass by value and can be converted to refrence by using & oprator
    print(s1);
}