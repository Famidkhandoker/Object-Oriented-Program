#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string name;
    string accountNumber;
    double balance;
public:
    BankAccount(string accName, string accNumber) {
        name = accName;
        accountNumber = accNumber;
        balance = 0.0;
        cout << "Account created for " << name << " with Account Number " << accountNumber << endl;
    }
    string getName(){
        return name;
    }
    string getAccountNumber(){
        return accountNumber;
    }
    double getBalance(){
        return balance;
    }

    void setBalance(double newBalance) {
        if (newBalance >= 0) {
            balance = newBalance;
            cout << "Balance updated to " << balance << endl;
        } else {
            cout << "Invalid balance amount. Balance must be non-negative." << endl;
        }
    }
    ~BankAccount() {
        cout << "Account " << accountNumber << " for " << name << " is being deleted." << endl;
    }
};
int main() {
    BankAccount account("Alice", "12345678");
    cout << "Account Holder Name: " << account.getName() << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;
    account.setBalance(5000.75);
    cout << "Updated Balance: " << account.getBalance() << endl;
    return 0;
}

