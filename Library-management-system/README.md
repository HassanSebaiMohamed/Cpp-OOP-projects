# Library Management System

## Description
A console-based Library Management System developed using C++. This application allows users to manage a library collection by viewing available books, borrowing and returning books, and adding new books.

The project demonstrates fundamental Object-Oriented Programming (OOP) concepts, including classes, objects, encapsulation, and vectors.

## Features
- View all available books.
- Borrow a book from the library.
- Return borrowed books.
- View all currently borrowed books.
- Add new books to the library.
- Move books dynamically between available and borrowed lists.
- Validate user input and handle invalid operations.
- Display book lists with numbered options for easy selection.

## Technologies & Skills
- C++
- Object-Oriented Programming (OOP)
- Classes and Objects
- Encapsulation
- Constructors
- Vectors (`std::vector`)
- Loops and Conditional Statements
- Functions
- Input Validation and Error Handling
- Console-Based User Interface

## Installation & Setup

### 1. Clone the Repository
```bash
git clone YOUR_REPOSITORY_LINK
```

### 2. Navigate to the Project Folder
```bash
cd Library-Management-System
```

### 3. Compile the Code
Using g++:
```bash
g++ main.cpp -o library
```

### 4. Run the Program

On Windows:
```bash
library.exe
```

On Linux / macOS:
```bash
./library
```

## Usage
1. Run the program.
2. Choose an operation from the main menu:
   - `1` - View Available Books
   - `2` - Borrow a Book
   - `3` - Return a Book
   - `4` - View Borrowed Books
   - `5` - Add a New Book
   - `6` - Exit
3. Enter the book number when borrowing or returning a book.
4. Enter the book title when adding a new book.
5. Follow the on-screen messages to complete each operation.

## Project Purpose
This project was created to practice C++ programming and apply fundamental OOP concepts through a practical library management application.

## Future Improvements
- Search for books by title.
- Prevent adding duplicate books.
- Store book information in files.
- Save borrowed book records permanently.
- Add multiple users and borrowing records.
