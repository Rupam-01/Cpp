/*Q2) Write a program that continuously takes user input for the following details:

Income (amount earned).
Type of Material (category of expenditure).
Expenditure on that Material (amount spent).
The input process continues until the user enters "done". After input completion, the program should:
Display the total income.
 Calculate and display the total savings (Income - Total Expenditure).
  List where the money was spent along with respective expenditure.

examples:-

Enter income and expenditure details (type 'done' to stop):
Enter income (or 'done' to finish): 5000

Enter type of material: Food

Enter expenditure on Food: 1000

Enter income (or 'done' to finish): 2000

Enter type of material: Transport

Enter expenditure on Transport: 500

Enter income (or 'done' to finish): done
*/
#include<iostream>
using namespace std;

int main() {
	int income;
	int expanse=0;
	int savings =0;
	int exp_amt_list[100];
	string exp_list[100];
	cout<<"Enter your total income:"<<endl;
	cin>>income;

	for(int i=0; i<=100; i++) {
		cout<<"Enter the type of expanse:(or'done' to Finish):"<<endl;
		cin>>exp_list[i];
		if(exp_list[i] == "done") {
			break;
		}
		else {
			cout<<"Enter the amount of Expanse:"<<endl;
			cin>>exp_amt_list[i];
			expanse +=exp_amt_list[i];
		}
	}
	savings =(income-expanse);

	cout<<"Total Income:"<<income<<endl;
	cout<<"Total Expanse:"<<expanse<<endl;
	cout<<"Savings:"<<savings<<endl;
	cout<<"Expanse:"<<endl;

	for(int i=0; i<=100; i++) {
		if(exp_list[i] == "done") {
			break;
		}
		else {
			cout<<exp_list[i]<<":$"<<exp_amt_list[i]<<endl;

		}
	}






	return 0;
}