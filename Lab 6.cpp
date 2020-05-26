

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setiosflags(ios_base::fixed);									//Do Not Use E Notation
	cout << setiosflags(ios_base::showpoint);								//Always Show Decimal Point
	cout << setprecision(2);												//Rounded To 2 Decimal Places

	int Weeks;
	double HoursWeek, TotalHoursWeek, WeekPay, TotalPay;

	TotalPay = 0;														//Initialization For TotalPay
	cout << "How many weeks in this pay period? ";
	cin >> Weeks;
	if (Weeks <= 0) {
		cout << "Error: Must be at least 1 week" << endl;
		return 0;
	}
	
	
	while (Weeks > 0) {
		cout << "How many hours did you work this week? ";
		cin >> HoursWeek;
		if (HoursWeek <= 0) {
			cout << "Error: Must be at least 1 hour" << endl;
			return 0;
		}
		TotalHoursWeek = (HoursWeek*7.72);
		WeekPay = TotalHoursWeek - (TotalHoursWeek*.33);
		cout << "Your pay for this week is $" <<  WeekPay << endl;
		TotalPay = WeekPay + TotalPay;
		Weeks--;
	}
	cout << "Your total pay for this pay period is $" << TotalPay;

	
	return 0;
     
}

