//Priority Queue for Object
#include <iostream>
#include <queue>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }

    //  Important: operator <
    bool operator<(const Student &obj) const {
        return this->marks < obj.marks; // max heap
    }
};

int main() {
    priority_queue<Student> pq;

    pq.push(Student("aman", 500));
    pq.push(Student("bhumika", 1000));
    pq.push(Student("chetan", 100));

    while(!pq.empty()) {
        cout << pq.top().name << " " << pq.top().marks << endl;
        pq.pop();
    }
}