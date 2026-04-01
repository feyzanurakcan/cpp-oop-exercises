#include <iostream>
using namespace std;

class VakifBank; 

class HalkBank {
public:
    int balance;

    HalkBank(int bal) {
        balance = bal;
    }

    friend void transfer(HalkBank &acc1, VakifBank &acc2, int amount);
};

class VakifBank {
public:
    int balance;

    VakifBank(int bal) {
        balance = bal;
    }

    friend void transfer(HalkBank &acc1, VakifBank &acc2, int amount);
};

void transfer(HalkBank &acc1, VakifBank &acc2, int amount) {
    if (acc1.balance >= amount) {
        acc1.balance -= amount;
        acc2.balance += amount;
        cout << "Transfer was successful" << endl;
    } else {
        cout << "Balance insufficient" << endl;
    }
}

int main() {
    HalkBank acc1(500);
    VakifBank acc2(200);

    cout << "Acc1 Balance: " << acc1.balance << endl;
    cout << "Acc2 Balance: " << acc2.balance << endl;

    transfer(acc1, acc2, 500);

    cout << "After transfer:" << endl;
    cout << "Acc1 Balance: " << acc1.balance << endl;
    cout << "Acc2 Balance: " << acc2.balance << endl;

    return 0;
}