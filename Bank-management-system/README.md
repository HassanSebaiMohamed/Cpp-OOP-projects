# Bank Management System

## Description
A console-based Bank Management System developed using C++. This application allows users to view bank accounts, deposit money, and withdraw funds through a simple interactive menu.

The project demonstrates fundamental Object-Oriented Programming (OOP) concepts, along with the use of vectors, constructors, loops, and input validation.

## Features
- View all active bank accounts.
- Deposit money into an existing account.
- Withdraw money from an account.
- Search for accounts using account numbers.
- Validate user input and handle invalid operations.
- Check account balance before processing withdrawals.
- Update account balances dynamically.
- Display account information, including owner name, account number, and balance.

## Technologies & Skills
- C++
- Object-Oriented Programming (OOP)
- Classes and Objects
- Constructors
- Vectors (`std::vector`)
- Loops and Conditional Statements
- Functions and Encapsulation
- Input Validation and Error Handling
- Console-Based User Interface

## Installation & Setup

### 1. Clone the Repository
```bash
git clone YOUR_REPOSITORY_LINK
```

### 2. Navigate to the Project Folder
```bash
cd Bank-Management-System
```

### 3. Compile the Code
Using g++:
```bash
g++ main.cpp -o bank
```

### 4. Run the Program

On Windows:
```bash
bank.exe
```

On Linux / macOS:
```bash
./bank
```

## Usage
1. Run the program.
2. Choose an operation from the main menu:
   - `1` - View All Accounts
   - `2` - Deposit Money
   - `3` - Withdraw Money
   - `4` - Exit
3. Enter the required account number and amount when prompted.
4. Follow the displayed messages to complete the operation.

## Sample Accounts

The system starts with five predefined accounts, each having an account number, owner name, and initial balance.

## Project Purpose
This project was created to practice C++ programming and apply fundamental OOP concepts through a practical banking application.

## Future Improvements
- Add new bank accounts.
- Delete existing accounts.
- Save account information to files.
- Load account information when the program starts.
- Improve input validation and account security.
