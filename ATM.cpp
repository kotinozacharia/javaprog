#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	
	int pin;
	bool isTrue = true;
	int password =12345;
	int wrongTrial= 0;
	int entry;
	double deposit= 0.0;
	double withdraw=0.0;
	double balance=0.0;
	do{
	cout<<"***welcome***\n";
	cout<<"Enter your pin:\n";
	cin>>pin;
	//this checks if the pin is true, allows the user into the system	
	if (pin == password){
		//now the user is in the main system and can access all functionalities
		do{//this allows the user to carry out more than one transaction without re-entering the pin
		cout<<"welcome the main system\n"
		    <<"1. Deposit\n"
		    <<"2. Withdrawal\n"
		    <<"3. Balalance\n"
		    <<"4. Exit\n";
		cout<<"please continue to making selection:\n";
		cin>>entry;
		
		switch(entry){
			case 1:
				cout<<"Deposit Amount:\n";
				cin>>deposit;
				balance = balance + deposit;
				break;
			case 2:
				if(balance <= 0){
					cout<<"please deposit some amount.\n";
				}else{
					cout<<"withdraw Amount:\n";
				cin>>withdraw;
				balance = balance - withdraw;
				}
				break;
			case 3:
				cout<<"Balance:\n"<<balance;
				break;
			case 4:
				cout<<"have a nice day:\n";
				isTrue= false;
				break;
		}
			
		}while(isTrue !=false);
		
	}
	else{
		wrongTrial ++;
		if(wrongTrial == 3){
			isTrue= false;
		}
		else
			cout<<"Wrong pin";
		
		
	}

	
	}while(isTrue !=false);
	
	return 0;
}
