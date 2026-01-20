#include <iostream>
using namespace std;

class Account
{
    int PinNumber = 12345;

public:
    string Name;
    string Address;
    string BranchLocation;
    int AccountNumber;
    double Balance = 0.0;

    Account()
    {
        Name = "Rakesh Kharva";
        Address = "Mumbai";
        BranchLocation = "Andheri";
        AccountNumber = 5678;
        Balance = 20000.0;
    }

    void setPinNumber(int pin)
    {
        PinNumber = pin;
    }

    int checkisCorrectPin(int pin)
    {
        if (pin == PinNumber)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void getAccountDetails()
    {
        cout << "\n";
        cout << "\n =============== ATM ACCOUNT DEPOSITE SYSTEM ================";
        cout << "\n The Names of the Account Holders are : " << Name;
        cout << "\n The Account Holder's Address is : " << Address;
        cout << "\n The Branch Location is : " << BranchLocation;
        cout << "\n Account Number : " << AccountNumber;
        cout << "\n\n ==========================================================";
    }
    void displayBalance()
    {
        cout << "\n Your available Balance amount is : Rs. " << Balance;
    }

    void deposite(double amount)
    {
        cout << "\n Present available balance is : " << Balance;
        cout << "\n Enter the Amount to be Deposited Rs. " << amount;
        Balance += amount;
        cout << "\n Your new available Balance amount is : Rs. " << Balance;
        cout << "\n.               Thank You!";
    }

    void withdrawn(double amount)
    {
        cout << "\n Present available balance is : " << Balance;
        cout << "\n Enter the Amount to be Withdrawn Rs. " << amount;
        if (amount > Balance)
        {
            cout << "\n Insufficient Available Balance in Your Account ";
            cout << "\n";
            cout << "\n               Sorry!!";
            cout << "\n ";
            return;
        }
        Balance -= amount;
        cout << "\n Your new available Balance amount is : Rs. " << Balance;
        cout << "\n.               Thank You!";
    }
};

class ATM
{
public:
    int pin;
    int key;

    Account userAccount;

    void Welcome()
    {
        cout << "\n =============== WELCOME TO ATM ===============";
        cout << "\n ==============================================";
        cout << "\n Press 1 and Then Enter to Access Your Account Via Pin Number";
        cout << "\n                    or                   ";
        cout << "\n Press 0 and press Enter to get Help.";
        cout << "\n Enter 0 or 1 to proceed:";
        cin >> key;
        if (key == 0)
        {
            cout << "\n ================ ATM ACCOUNT STATUS ===================";
            cout << "\n You must have the correct pin number to access this account.See your bank representative for assistance during bank opening hours.";
            cout << "\n Thanks for, your choice today!!";
            cout << "\n ==============================================";
            cout << "\n Press any key to continue ...";
        }
        else if (key == 1)
        {
            void VerifyPin();
        }
        else
        {
            cout << "\n ================ THANK YOU ===================";
            cout << "\n\n You had made your attempt which failed!!! No More attempts allowed!! Sorry!!";
            cout << "\n\n ==============================================";
            cout << "\n\n Press any key to continue ...";
        }
    }
    void VerifyPin()
    {

        cout << "\n\n\n ================ ATM ACCOUNT ACCESS ================";
        cout << "\n Enter Your Acc Pin Access Number! [Only one attenmpt is allowed]:";
        cin >> pin;
        if (userAccount.checkisCorrectPin(pin))
        {
            Menu();
        }
        else
        {
            cout << "\n ================ THANK YOU ===================";
            cout << "\n\n You had made your attempt which failed!!! No More attempts allowed!! Sorry!!";
            cout << "\n\n ==============================================";
            cout << "\n\n Press any key to continue ...";
        }
    }
    void Menu()
    {
        int choice;
        do
        {
            cout << "\n";
            cout << "\n =============== ATM MAIN MENU SCREEN ================";
            cout << "\n\n Enter [1] To Deposite Cash ";
            cout << "\n Enter [2] To Withdraw Cash ";
            cout << "\n Enter [3] To Balance Inquiry ";
            cout << "\n Enter [0] To Exit ATM ";
            cout << "\n ";
            cout << "\n PLEASE ENTER A SELECTION AND PRESS RETURN KEY ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                Deposite();
                break;
            case 2:
                Withdraw();
                break;
            case 3:
                userAccount.getAccountDetails();
                userAccount.displayBalance();
                break;
            case 0:
                cout << "\n Thank you for using the ATM. Goodbye!";
                break;
            }
        } while (choice != 0);
    }
    void Deposite()
    {
        int amount;
        userAccount.getAccountDetails();
        cout << "\n Enter the Amount to be Deposited Rs. ";
        cin >> amount;
        userAccount.deposite(amount);
        cout << "\n Press any key to Return to the Main Menu ";
    }
    void Withdraw()
    {
        int amount;
        userAccount.getAccountDetails();
        cout << "\n Enter the Amount to be Withdrawn Rs. ";
        cin >> amount;
        userAccount.withdrawn(amount);
        cout << "\n Press any key to Return to the Main Menu ";
    }
};

int main()
{
    ATM A1;
    A1.Welcome();
    A1.VerifyPin();
}