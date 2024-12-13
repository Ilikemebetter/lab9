#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
	double loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	// use 'setw' to set width of table and 'left' to set left-alignment
	// you can change input argument of 'setw()' to see the effect
	// Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	// use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	// you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); // 2ตน
	int EndOfYear = 1;
	double Prevbalance, Interest, Total, Payment, NewBalance;
	Prevbalance = loan;
	while (Prevbalance > 0)
	{
		// Prevbalance = loan;
		Interest = Prevbalance * (rate / 100);
		Total = Prevbalance + Interest;
		if (Prevbalance >= pay)
		{
			Payment = pay;
		}
		else if (Prevbalance <= pay && Total>pay)
		{
			Payment = pay;
		}
		else
		{
			Payment = Total;
		}

		NewBalance = Total - Payment;

		cout << setw(13) << left << EndOfYear;
		cout << setw(13) << left << Prevbalance;
		cout << setw(13) << left << Interest;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		if (Prevbalance == 0)
			break;
		EndOfYear++;
		Prevbalance = NewBalance;
	}

	return 0;
}
