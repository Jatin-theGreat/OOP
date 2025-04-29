#include<iostream>
#include<string.h>
using namespace std;

class Bank{
	private:
		int account_number;
		float balance;
			
	public:
		//constructor
		Bank(int n= 123456, int b= 5000):account_number(n),balance(b){

		};
		
		//function to get balance of account
		int get_balance(){
			return balance;
		}
		
		//function overloading
		void deposit(int amount){
			balance += amount;
			cout << "Depositing "<< amount<<"Rs in cash"<<endl;
		}
		
		void deposit(double amt){
			balance += amt;
			cout << "Depositing "<< amt<<"Rs via digital payment"<< endl; 
		}
		
		void deposit(string id, int rupees){
			balance += rupees;
			cout << "Depositing "<< rupees<<"Rs using UPI("<<id<<")"<<endl<<endl;
		}
		
};
//class Account
class Account{
	private:
		int ac_number;
		float Balance;
		
	public:
		//constructor
		Account(int num = 10203040, int bal= 3000):ac_number(num),Balance(bal){

		};
		
		//function to get balance
		int getBalance(){
			return Balance;	
		}
		
		//operator overloading
		Account operator +(const Account& obj){
			return Account(Balance+obj.Balance);
		}
		
};
int main(){
	//creating objects of class Bank
	Bank b1, b2;
	Bank b3(102030, 2000);
	
	b1.deposit(3000);
	b2.deposit(2500.50);
	b3.deposit("gpay@upi", 3000);
	
	
	Account a1(1234, 10000);
	Account a2(4567, 7000);
	int balance_a1 = a1.getBalance();
	cout<< "Account 1 balance: "<<balance_a1<<"Rs" << endl;
	
	int balance_a2 = a2.getBalance();
	cout<< "Account 2 balance: "<<balance_a2<<"Rs" << endl<<endl;
	
	a2 = a2+a1;
	int newBalance_a2 = a2.getBalance();
	cout << "New account 2 balance: "<<newBalance_a2<<"Rs"<<endl;
	
	
	return 0;
}
