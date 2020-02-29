//The chapter 2 practice -- No.3 title
#include <iostream>

void mice();
void run();

int main()
{
	using namespace std;
	mice();
	cout << endl;
	mice();
	cout << endl;
	run();
	cout << endl;
	run();
	cout << endl;
	return 0;
}

void mice() {
	using namespace std;
	cout << "Three blind mice";
}
void run() {
	using namespace std;
	cout << "See they run";
}