	#include<iostream>
	#include<iomanip> //For using setw(), setprecision(), ...
	using namespace std;

	int main(){	
		double loan,interest,pay,balance,NewBalance,interest2;
		cout << "Enter initial loan: ";
		cin >> loan;
		cout << "Enter interest rate per year (%): ";
		cin >> interest ;
		cout << "Enter amount you can pay per year: ";
		cin >> pay;
		//use 'setw' to set width of table and 'left' to set left-alignment
		//you can change input argument of 'setw()' to see the effect
		//Try to change from 'left' to 'right' and see the effect
		cout << setw(13) << left << "EndOfYear#"; 
		cout << setw(13) << left << "PrevBalance"; 
		cout << setw(13) << left << "Interest"; 
		cout << setw(13) << left << "Total";
		cout << setw(13) << left << "Payment";
		cout << setw(13) << left << "NewBalance";
		cout << "\n";
		
		//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
		//you can change input argument of 'setprecision()' to see the effect

		cout << fixed << setprecision(2);
		int year = 1;
		balance = loan;
		NewBalance = balance;
	do{

		cout << setw(13) << left << year; 
		cout << setw(13) << left << balance;

		interest2 = balance*interest/100;
		balance = balance + interest2 ;
		NewBalance = balance - pay;
		if(pay >= balance){
			pay = balance;
			NewBalance = 0;
		}
		if ( NewBalance < 0 )
		{
			pay = -1*NewBalance;
			NewBalance = 0;
		}
		
		cout << setw(13) << left << interest2;
		cout << setw(13) << left << balance;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << NewBalance;
		cout << "\n";	
		balance = NewBalance;
		year++;
	}
		while(NewBalance > 0);
	return 0;
	}
