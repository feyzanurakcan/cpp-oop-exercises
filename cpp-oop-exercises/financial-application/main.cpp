#include <iostream>

using namespace std;

class FinancialApplication {
private:
    static double interestRate;

public:
    static void setInterestRate(double rate) {
        interestRate = rate;
    }

    static double getInterestRate() {
        return interestRate;
    }
};

double FinancialApplication::interestRate = 0.0;

int main() {
    FinancialApplication::setInterestRate(0.05);
    FinancialApplication account1, account2;

    cout << "Interest Rate for Account 1: " << account1.getInterestRate() << endl;
    cout << "Interest Rate for Account 2: " << account2.getInterestRate() << endl;

    return 0;
}