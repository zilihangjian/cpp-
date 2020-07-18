//block.cpp -- use a block statement
#include<iostream>
int main()
{
	using namespace std;
	cout << "The Amazing Accounto will sum and serage ";
	cout << "five numbers fot you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{									// block starts here
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}									// block ends here
	cout << "Five exquistsite choices indeed: ";
	cout << "They sum to " << sum << endl;
	cout << "and reverage to " << sum / 5 << ".\n";
	cout << "The Amazing Accounto bids you adieu!\n";
	return 0;
}