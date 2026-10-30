
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class Student {
private:
    int id;
    int grade;
    string name;
    vector<string> courses;

public:
    Student(int studentID, int studentGrade, string studentName) {
        id = studentID;
        grade = studentGrade;
        name = studentName;
    }

    int getID() const {
        return id;
    }

    void addCourse(string course) {
        courses.push_back(course);
    }

    void deleteCourse(string course) {
        for (int i = 0; i < courses.size(); i++) {
            if (courses[i] == course) {
                courses.erase(courses.begin() + i);
                cout << "Course deleted successfully.\n";
                return;
            }
        }

        cout << "Course not found.\n";
    }

    void display() const {
        cout << "\nStudent ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
        cout << "Courses: ";

        if (courses.empty()) {
            cout << "None";
        }
        else {
            for (int i = 0; i < courses.size(); i++) {
                cout << courses[i] << " ";
            }
        }

        cout << "\n";
    }
};

class SystemManager {
private:
    vector<Student> students;

    int findStudent(int id) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getID() == id)
                return i;
        }

        return -1;
    }

public:
    void addStudent() {
        int id, grade;
        string name;

        cout << "Enter student ID: ";
        cin >> id;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid ID.\n";
            return;
        }

        if (findStudent(id) != -1) {
            cout << "This ID already exists.\n";
            return;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student grade: ";
        cin >> grade;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid grade.\n";
            return;
        }

        students.push_back(Student(id, grade, name));

        cout << "Student added successfully.\n";
    }

    void deleteStudent() {
        int id;

        cout << "Enter student ID: ";
        cin >> id;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid ID.\n";
            return;
        }

        int index = findStudent(id);

        if (index == -1) {
            cout << "Student not found.\n";
            return;
        }

        students.erase(students.begin() + index);

        cout << "Student deleted successfully.\n";
    }

    void addCourseToStudent() {
        int id;
        string course;

        cout << "Enter student ID: ";
        cin >> id;

        int index = findStudent(id);

        if (index == -1) {
            cout << "Student not found.\n";
            return;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter course name: ";
        getline(cin, course);

        students[index].addCourse(course);

        cout << "Course added successfully.\n";
    }

    void deleteCourseFromStudent() {
        int id;
        string course;

        cout << "Enter student ID: ";
        cin >> id;

        int index = findStudent(id);

        if (index == -1) {
            cout << "Student not found.\n";
            return;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter course name: ";
        getline(cin, course);

        students[index].deleteCourse(course);
    }

    void displayAllStudents() {
        if (students.empty()) {
            cout << "No students found.\n";
            return;
        }

        for (int i = 0; i < students.size(); i++) {
            students[i].display();
        }
    }

    void displayMenu() {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Delete Student\n";
        cout << "3. Add Course\n";
        cout << "4. Delete Course\n";
        cout << "5. Display All Students\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
    }

    void start() {
        int choice;

        do {
            displayMenu();
            cin >> choice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input.\n";
                continue;
            }

            switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                deleteStudent();
                break;

            case 3:
                addCourseToStudent();
                break;

            case 4:
                deleteCourseFromStudent();
                break;

            case 5:
                displayAllStudents();
                break;

            case 6:
                cout << "Thank you for using the system.\n";
                break;

            default:
                cout << "Invalid choice.\n";
            }

        } while (choice != 6);
    }
};

int main() {
    SystemManager system;
    system.start();

    return 0;
}
