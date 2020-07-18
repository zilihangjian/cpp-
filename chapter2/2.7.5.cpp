// The chapter 2 practice -- No.5 title
#include <iostream>
double ctof(double);

int main()
{
	using namespace std;
	double cel;
	cout << "Please enter a Celsius value: ";
	cin >> cel;
	double fah;
	fah = ctof(cel);
	cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit.";
	cout << endl;
}

double ctof(double cel)
{
	return 1.8 * cel + 32.0;
}