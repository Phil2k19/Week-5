#include <iostream>
#include <iomanip>
using namespace std;
double CalcFee(int input, double MinutesUsed)
{
	double MonthlyBill = 0;
	cout << fixed << setprecision(2);

	if (input == 1)
	{
		if (MinutesUsed <= 300)
			MonthlyBill = 9.95;
		else
			MonthlyBill = (MinutesUsed-300) * 0.08 + 9.95;
	}
	else if (input == 2)
	{
		if (MinutesUsed <= 600)
			MonthlyBill = 14.95;
		else
			MonthlyBill = (MinutesUsed - 600) * 0.06 + 14.95;
	}
	else
	{
		MonthlyBill = 19.95;
	}
	return MonthlyBill;
}
