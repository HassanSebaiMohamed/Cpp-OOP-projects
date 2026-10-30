
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class LibrarySystem {
private:
    vector<string> availableBooks;
    vector<string> borrowedBooks;

public:
    LibrarySystem() {
        availableBooks = {
            "The Hundred Years' War On Palestine",
            "I saw Ramallah",
            "Harry Potter",
            "The Lord Of The Rings",
            "Little Women",
            "Atomic Habits",
            "Alchemist",
            "1984",
            "The Great Gatsby",
            "Psychology Of Money"
        };
    }

    void displayMenu() {
        cout << "\n--- Library Management System ---\n";
        cout << "1. View Available Books\n";
        cout << "2. Borrow a Book\n";
        cout << "3. Return a Book\n";
        cout << "4. View Borrowed Books\n";
        cout << "5. Add a New Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
    }

    void displayBooks(vector<string>& books, string title) {
        cout << "\n--- " << title << " ---\n";

        if (books.empty()) {
            cout << "No books found.\n";
            return;
        }

        for (int i = 0; i < books.size(); i++) {
            cout << i + 1 << ". " << books[i] << endl;
        }
    }

    void viewAvailableBooks() {
        displayBooks(availableBooks, "Available Books");
    }

    void viewBorrowedBooks() {
        displayBooks(borrowedBooks, "Borrowed Books");
    }

    void borrowBook() {
        viewAvailableBooks();

        if (availableBooks.empty())
            return;

        int choice;
        cout << "\nEnter book number: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\n";
            return;
        }

        if (choice < 1 || choice > availableBooks.size()) {
            cout << "Invalid book number.\n";
            return;
        }

        string book = availableBooks[choice - 1];

        borrowedBooks.push_back(book);
        availableBooks.erase(availableBooks.begin() + choice - 1);

        cout << "\"" << book << "\" borrowed successfully.\n";
    }

    void returnBook() {
        viewBorrowedBooks();

        if (borrowedBooks.empty())
            return;

        int choice;
        cout << "\nEnter book number: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\n";
            return;
        }

        if (choice < 1 || choice > borrowedBooks.size()) {
            cout << "Invalid book number.\n";
            return;
        }

        string book = borrowedBooks[choice - 1];

        availableBooks.push_back(book);
        borrowedBooks.erase(borrowedBooks.begin() + choice - 1);

        cout << "\"" << book << "\" returned successfully.\n";
    }

    void addBook() {
        string title;

        cout << "Enter book title: ";

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, title);

        if (title.empty()) {
            cout << "Invalid book title.\n";
            return;
        }

        availableBooks.push_back(title);

        cout << "Book added successfully.\n";
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
                viewAvailableBooks();
                break;

            case 2:
                borrowBook();
                break;

            case 3:
                returnBook();
                break;

            case 4:
                viewBorrowedBooks();
                break;

            case 5:
                addBook();
                break;

            case 6:
                cout << "Thank you for using the Library System.\n";
                break;

            default:
                cout << "Invalid choice.\n";
            }

        } while (choice != 6);
    }
};

int main() {
    LibrarySystem library;
    library.start();

    return 0;
}
