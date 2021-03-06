// Project2.recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

/*************************DECLARATION SECTION*************************/
class SavingsAccount {
private:
	int principle;
	double rate;
	int period;
public:
	SavingsAccount();
	SavingsAccount(int, double, int);
	~SavingsAccount();
	void getPrinciple();
	void getRate();
	void getPeroid();
	int setPrinciple();
	double setRate();
	int setPeriod();
	double projectedSavings(int,double,int);
};

/************************IMPLEMENTATION SECTION***********************/
SavingsAccount::SavingsAccount() {     //Default case in case of user dosent provide any input
	principle = 1000;
	rate = 10;
	period = 3;

}
SavingsAccount::SavingsAccount(int p, double r, int n) {//In case if user provides input
	principle = p;
	rate = r;
	period = n;
}
SavingsAccount::~SavingsAccount() {//Destructor will be implemented after end of program
	cout << endl;
	cout << "Program ended.";
	cout << endl;
}
void SavingsAccount:: getPrinciple() {     //accessors for principle
	int p;
	cin >> p;
	principle = p;

}
void SavingsAccount::getRate() {           //accessors for rate of interest
	double r;
	cin >> r;
	rate = r;
	return ;

}
void SavingsAccount::getPeroid() {       //accessors for number of years
	int n;
	cin >> n;
	period = n;

}
int SavingsAccount::setPrinciple() {    //mutators for principle
	return principle;

}
double SavingsAccount::setRate() {    //mutators for rate of interest
	return rate;

}
int SavingsAccount::setPeriod() {    //mutators for number of years
	return period;
}
double SavingsAccount::projectedSavings(int p,double r,int n) {     //recursive function to calculate projected savings
	if (n == 0)      //base case
		return p;
	else
		return (1 + (r/100))*projectedSavings(p,r,n-1);    //recursive part
}


/**********************MAIN FUNCTION*******************/
int main()
{
	SavingsAccount s1;
	cout << "Please enter the principle:";
	s1.getPrinciple();
	cout << "Please enter the interest rate:";
	s1.getRate();
	cout << "Please enter the number of the years:";
	s1.getPeroid();
	cout << "Your total savings after " << s1.setPeriod() << " years will be $"<<s1.projectedSavings(s1.setPrinciple(),s1.setRate(),s1.setPeriod());
	
	
	
	
	return 0;
}

