
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

class Account {
public:
    string ownerName;
    long long accountNumber;
    double balance;

    Account(string name, long long number, double money) {
        ownerName = name;
        accountNumber = number;
        balance = money;
    }
};

class BankSystem {
private:
    vector<Account> accounts;

    int findAccount(long long number) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].accountNumber == number)
                return i;
        }
        return -1;
    }

public:
    BankSystem() {
        accounts.push_back(Account("Haneen Ramy", 101, 2500));
        accounts.push_back(Account("Nour Sarhan", 102, 1200.50));
        accounts.push_back(Account("Hana Hoseiny", 103, 75.25));
        accounts.push_back(Account("Salma Amin", 104, 900));
        accounts.push_back(Account("Rawan Amr", 105, 1800));

        cout << fixed << setprecision(2);
    }

    void displayMenu() {
        cout << "\n--- Bank Management System ---\n";
        cout << "1. View All Accounts\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
    }

    void viewAccounts() {
        cout << "\n--- All Accounts ---\n";

        for (int i = 0; i < accounts.size(); i++) {
            cout << "Owner: " << accounts[i].ownerName
                 << " | Account: " << accounts[i].accountNumber
                 << " | Balance: $" << accounts[i].balance << endl;
        }
    }

    void depositMoney() {
        long long number;
        double amount;

        cout << "Enter account number: ";
        cin >> number;

        int index = findAccount(number);

        if (index == -1) {
            cout << "Account not found.\n";
            return;
        }

        cout << "Enter deposit amount: ";
        cin >> amount;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\n";
            return;
        }

        if (amount <= 0) {
            cout << "Amount must be greater than zero.\n";
            return;
        }

        accounts[index].balance += amount;

        cout << "Deposit successful!\n";
        cout << "New balance: $" << accounts[index].balance << endl;
    }

    void withdrawMoney() {
        long long number;
        double amount;

        cout << "Enter account number: ";
        cin >> number;

        int index = findAccount(number);

        if (index == -1) {
            cout << "Account not found.\n";
            return;
        }

        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\n";
            return;
        }

        if (amount <= 0) {
            cout << "Amount must be greater than zero.\n";
            return;
        }

        if (amount > accounts[index].balance) {
            cout << "Insufficient balance.\n";
            return;
        }

        accounts[index].balance -= amount;

        cout << "Withdrawal successful!\n";
        cout << "New balance: $" << accounts[index].balance << endl;
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
                viewAccounts();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                cout << "Thank you for using the Bank System.\n";
                break;

            default:
                cout << "Invalid choice.\n";
            }

        } while (choice != 4);
    }
};

int main() {
    BankSystem bank;
    bank.start();

    return 0;
}
