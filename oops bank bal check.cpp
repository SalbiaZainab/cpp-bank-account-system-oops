#include<iostream>
using namespace std;
class BankAccount{
	private:
		string name;
		double balance;
	public:
		BankAccount(string n,double b){
			name = n;
			balance = b;
		}
		void deposit(double amount){
			balance += amount;
			cout << "Deposited: " << amount << endl;
		}
		void withdraw(double amount){
			if(amount >= balance){
				cout << "Withdraw: " << amount << endl;
			}
			else{
				cout << "Insuficient balance" << endl;
			}
	    }
		void checkBalance() {
			cout << "Current balance: " << balance << endl;
		}
	
};
int main()
{
	BankAccount obj("Salbia",50000);
	obj.deposit(50000);
	obj.withdraw(10000);
	obj.checkBalance();
	return 0;
}
