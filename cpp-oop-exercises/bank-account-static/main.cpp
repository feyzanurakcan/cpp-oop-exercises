#include <iostream>
using namespace std;
class BankAccount{
    private:
    double balance;
    string owner;
    static int total_accounts_created;
    public:
    BankAccount(double initial_deposit, string accowner){
        balance=initial_deposit;
        owner=accowner;
        total_accounts_created++;
    }
    static int get_total_accounts_created(){
        return total_accounts_created;
    }
};
int BankAccount::total_accounts_created=0;

int main() {
    BankAccount acct1(1000.0,"Zehra");
    BankAccount acct2(500.0,"Zeynep");
    
    cout<<"Total accounts created:"<<
    BankAccount::get_total_accounts_created()<<endl;
    
    return 0;
}