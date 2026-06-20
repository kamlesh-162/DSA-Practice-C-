#include<iostream>
using namespace std;


class Student {
public:
    string name;
    static int totalStudents;  // Shared by all objects
    
    Student(string n) {
        name = n;
        totalStudents++;  // Increment when object created
    }
};

// Initialize static variable (MUST do this!)
int Student::totalStudents = 0;

int main() {
    Student s1("Kamlesh");
    cout << "Total: " << Student::totalStudents << endl;  // 1
    
    Student s2("Priya");
    cout << "Total: " << Student::totalStudents << endl;  // 2
    
    Student s3("Amit");
    cout << "Total: " << Student::totalStudents << endl;  // 3
    
    // All objects share same variable
    cout<< s1 << " students: " << s1.totalStudents << endl;  // 3
    cout<< s2 << " students: " << s2.totalStudents << endl;  // 3
    
    return 0;
}