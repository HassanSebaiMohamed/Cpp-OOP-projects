# Student Management System

## Description
A console-based Student Management System developed using C++. This application allows users to manage student records and their enrolled courses through a simple interactive menu.

Users can add and delete students, assign courses to students, remove courses, and display all student information.

The project demonstrates fundamental Object-Oriented Programming (OOP) concepts, including classes, objects, encapsulation, constructors, and dynamic data storage using vectors.

## Features
- Add a new student with an ID, name, and grade.
- Delete an existing student using their ID.
- Add courses to a specific student.
- Delete courses from a specific student.
- Display all students and their enrolled courses.
- Search for students using their IDs.
- Prevent adding students with duplicate IDs.
- Validate user input and handle invalid operations.
- Manage student records and courses dynamically using vectors.
- Console-based interactive menu.

## Technologies & Skills
- C++
- Object-Oriented Programming (OOP)
- Classes and Objects
- Encapsulation
- Constructors
- Getters and Member Functions
- Vectors (`std::vector`)
- Loops and Conditional Statements
- Functions and Searching
- Input Validation and Error Handling
- Console Input/Output

## Installation & Setup

### 1. Clone the Repository
```bash
git clone YOUR_REPOSITORY_LINK
```

### 2. Navigate to the Project Folder
```bash
cd Student-Management-System
```

### 3. Compile the Code
Using g++:
```bash
g++ main.cpp -o student
```

### 4. Run the Program

On Windows:
```bash
student.exe
```

On Linux / macOS:
```bash
./student
```

## Usage
1. Run the program.
2. Choose an operation from the main menu:
   - `1` - Add Student
   - `2` - Delete Student
   - `3` - Add Course to Student
   - `4` - Delete Course from Student
   - `5` - Display All Students
   - `6` - Exit
3. Enter the required student information, including ID, name, and grade.
4. Enter the student ID when managing courses.
5. Follow the on-screen messages to complete each operation.

## Project Purpose
This project was created to practice C++ programming and apply fundamental OOP concepts through a practical student management application.

## Future Improvements
- Search and display a specific student.
- Prevent adding duplicate courses to the same student.
- Save student records using file handling.
- Load student data when the program starts.
- Add more student information and course details.
