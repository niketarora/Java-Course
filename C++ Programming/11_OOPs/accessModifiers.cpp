#include <iostream>
#include <vector>
using namespace std;
class Student {
public:
    int rno;
    string name;
    Student(int r, string n, float m) {
        rno = r;
        name = n;
        marks = m;
    }
    float getMarks() { // getter
        return marks;
    }
    void setMarks(float m) { // setter
        marks = m;
    }
private: 
    float marks;
};

int main() {
    Student s1(76, "Raghav", 92.2f);
    s1.setMarks(98.5f);
}
