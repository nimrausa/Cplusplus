//Full Name: NIMRA SIDDIQUI
//Assignment: Assignment 3 , Problem 3: Bank Account Objects

#include <iostream>
#include <string>
using namespace std;

//class declaration
class Account
{

    private:
    string password;  //store password of the account
    int balance; // store current balance of the account

  public:
  Account(); //defualt constructor
  Account(string, int); //constructor that takes two parameters string and integer
  bool login(string); //the function is takes string as a parameter and return boolean value. It validates login credentials
  int getBalance(); //this function return integer and takes no arguments.
  void deposit(int); //this function is for depositing amount and takes integer as an argument and return void
  bool withdraw(int );// function used for withdrawing amount and takes integer as a parameter and return boolean value

};



//function definition section

Account::Account() //default constructor. called when object or instances of a class is created
   {
       balance=0; //initially balance is set to 0
       password="changeit"; //initially password is qual to  "changeit"
   }

Account::Account(string pass, int bal) //constructor that sets password and balance as passed in arguments
  {
      password=pass; //password is set as value of variable "pass" that is passed in argument
      balance=bal; //balance is set as value of variable "bal" that is passed in argument
  }

  bool Account:: login(string p) //this function validates the password of the account number
  {
      if(p==password) //if password of the account is same as password passed in the parameter , return true
      {
          return true;
      }
      else
      {
          return false;
      }

  }

  int Account:: getBalance() //this function return current balance of the account
  {
      return balance;

  }

  void Account:: deposit(int amount) //this function is used for depositing the amount in the account
  {
      balance=balance+amount; //the amount is passed in the argument and added to the current balance

  }

  bool Account:: withdraw(int amount) //function for withdrawing amount
  {
      if(balance<amount) // if the withdrawing amount is more than the current balance, return false
      {
          return false; //returns false
      }

      else //if the withdrawing balance is less than current balance
      {
          balance=balance-amount; //withdrawing amount is deducted from the current amount
          return true;    //after deducting withdrawing amount, it returns true
      }

  }



//start of the main function from here

int main() {
    int id;
    char choice;
    string password;
    int amount;

    // Create array of accounts and construct Account objects for each one.
    Account accounts[3];
    accounts[0] = Account("12345", 100);
    accounts[1] = Account("password", 500);
    accounts[2] = Account("xyzzy", 200);

    while (true) {
        // Get the user account number and make sure it exists
        cout << "Enter account number: ";
        cin >> id;
        while (id < 0 || id > 2) {
            cout << "Enter account number: ";
            cin >> id;
        }

        // Prompt for password
        cout << "Enter password for that account: ";
        cin >> password;

        // Ask that Account object to validate that password
        if (accounts[id].login(password)) {

            // Successful login, so present options until quit chosen
            cout << "Get balance (g), Deposit (d), Withdraw (w), or Quit (q): ";
            cin >> choice;
            while (choice != 'q') {
                switch (choice) {

                    // Call getBalance on object to view current balance
                    case 'g':
                        cout << "Your balance is: $" << accounts[id].getBalance() << endl;
                        break;

                    // Call deposit on object to increment amount in account
                    case 'd':
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        accounts[id].deposit(amount);
                        break;

                    // Call deposit on object to decrement amount in account
                    case 'w':
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        bool result = accounts[id].withdraw(amount);

                        // withdraw returns false if not enough money in account to withdraw that amount
                        if (!result) {
                            cout << "Can't withdraw that amount!" << endl;
                        }
                        break;
                }
                cout << "Get balance (g), Deposit (d), Withdraw (w), or Quit (q): ";
                cin >> choice;
            }
        }
        else {
            // Incorrect password for that Account object entered
            cout << "Incorrect password!" << endl;
        }
    }
}




