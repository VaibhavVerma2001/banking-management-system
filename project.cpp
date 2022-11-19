#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdio.h>

using namespace std;

class Banking_Management_System
{
    private:
    string address, name;
    char acc_type;
    float balance;

    public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void Banking_Management_System::open_account()
{
    name = "Vaibhav Verma";
    cout << "Enter your full name: " << name << endl;

    address = "Uttar Pradesh";
    cout << "Enter your address: " << address << endl;

    acc_type = 'S';
    cout << "What type of account you want"
         << "to open saving(Type S) or Current(Type C):" << acc_type << endl;

    balance = 8000;

    cout << "Enter how much money you want to deposit:" << balance << endl;

    cout << "Account Created Successfully";
}

void Banking_Management_System::deposit_money()
{
    int Amount;
    Amount = 10000;
    cout << "Enter how much money you want to deposit: " << Amount << endl;

    balance += Amount;
    cout << "\nAvailable Balance:" << balance;
}
void Banking_Management_System::display_account()
{
    cout << "Name:" << name << endl
         << "Address:" << address << endl
         << "Type:" << acc_type << endl
         << "Balace:" << balance << endl
         << endl;
}
void Banking_Management_System::withdraw_money()
{
    float amount;
    amount = 3200;
    cout << "Enter how much money "
         << "you want to withdraw:"
         << amount << endl;
    balance -= amount;

    cout << "\nAvailable balance:"
         << balance;
}

int main()
{
    int choice;
    Banking_Management_System Customer;

    cout << "\n1)Open account" << endl;
    Customer.open_account();
    cout << "\n---------------------------------------\n";

    cout << "\n2)Deposit Money" << endl;
    Customer.deposit_money();
    cout << "\n---------------------------------------\n";

    cout << "\n3)Withdraw Money" << endl;
    Customer.withdraw_money();
    cout << "\n---------------------------------------\n";

    cout << "\n4)Display Account" << endl;
    Customer.display_account();
    cout << "\n---------------------------------------\n";

    return 0;
}