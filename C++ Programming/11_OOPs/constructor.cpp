#include<iostream>
using namespace std;
class Student{ // Student is a new data type
public:
    string name;
    int rno;
    float gpa;
    Student(){ // Default Constructor

    }
    Student(string s, int r, float g){ // Parameterised Constructor
        name = s;
        rno = r;
        gpa = g;
    }
};
int main(){
    // two methods of initiallzing
    Student s1("Raghav Garg",76,8.2);

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 6.2;

    // copy constructor
    Student s3 = s1;  // both are call by value
    Student s4(s1);
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;
    cout<<s4.name<<" "<<s4.gpa<<" "<<s4.rno<<endl;
}