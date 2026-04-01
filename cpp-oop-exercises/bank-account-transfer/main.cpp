#include <iostream>
using namespace std;

class BankAccount {
public:
    string owner;
    double balance;

    BankAccount(string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    void showBalance() {
        cout << owner << "'s balance: $" << balance << endl;
    }

    void transferMoney(BankAccount &receiver, double amount) {
        if (balance >= amount) {
            balance -= amount;
            receiver.balance += amount;
            cout << owner << " transferred $" << amount
                 << " to " << receiver.owner << endl;
        } else {
            cout << owner << " does not have enough balance to transfer $"
                 << amount << endl;
        }
    }
};

int main() {
    BankAccount acc1("Alice", 500);
    BankAccount acc2("Bob", 300);

    cout << "Initial Balances:" << endl;
    acc1.showBalance();
    acc2.showBalance();

    cout << "Performing Money Transfer:" << endl;
    acc1.transferMoney(acc2, 200);

    cout << "Balances After Transfer:" << endl;
    acc1.showBalance();
    acc2.showBalance();

    return 0;
}