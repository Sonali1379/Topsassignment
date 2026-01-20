#include<iostream>
using namespace std;
class BankAccount {
    double balance;
public:
    BankAccount(double Initialbalance) {
        if(Initialbalance < 0) {
            balance = 0.0;
            cout << "\n Initial balance invalid. Setting balance to 0.";
        } else {
            balance = Initialbalance;
        }
    }
    void deposit(double amount) {
        if(amount > 0) {
            balance = balance + amount;
            cout << "\n Deposited: " << amount;
        } else {
            cout << "\n Deposit amount must be positive.";
        }
    }
    void withdraw(double amount) {
        if(amount > balance) {
            cout << "\n Withdrawal amount exceeds balance.";
        } else if(amount <= 0) {
            cout << "\n Withdrawal amount must be positive.";
        } else {
            balance = balance - amount;
            cout << "\n Withdrew: " << amount;
        }
    }
    void displayBalance() {
        cout << "\n Current Balance: " << balance;
    }
};
int main() {
    BankAccount account(6000);
    account.displayBalance();
    account.deposit(1500);
    account.withdraw(2000);
    account.displayBalance();
}