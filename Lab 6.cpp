

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setiosflags(ios_base::fixed);									//Do Not Use E Notation
	cout << setiosflags(ios_base::showpoint);								//Always Show Decimal Point
	cout << setprecision(2);										//Rounded To 2 Decimal Places

	int Weeks;
	double hoursWeek, totalHoursweek, weekPay, totalPay;

	totalPay = 0;												//Initialization For TotalPay
	const float Salary = 7.72;										//Const for rate of pay per hour
	const float taxReductions = .33;									//Const for tax reductions from paycheck
	
	
	
	
	cout << "How many weeks in this pay period? ";
	cin >> Weeks;
	if (Weeks <= 0) {											//Edgecase For Weeks
		cout << "Error: Must be at least 1 week" << endl;
		return 0;
	}
	
	
	while (Weeks > 0) {
		cout << "How many hours did you work this week? ";
		cin >> hoursWeek;
		if (hoursWeek < 0) {										//Edgecase For HoursWeek
			cout << "Error: Must be at least 1 hour" << endl;
			return 0;
		}
		totalHoursweek = (hoursWeek*Salary);
		weekPay = totalHoursweek - (totalHoursweek*taxReductions);
		cout << "Your pay for this week is $" <<  weekPay << endl;
		totalPay = weekPay + totalPay;
		Weeks--;
	}
	cout << "Your total pay for this pay period is $" << totalPay;

	
	return 0;
     
}

