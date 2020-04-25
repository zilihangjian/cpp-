// delete.cpp -- using the delete operator
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>	// or sring.h
#include <string>
using namespace std;
char* getname(void);// function prototype
int main()
{
	char* name;		// create pointer but no storage

	name = getname();// assign address of string to name
	cout << name << " at " << (int*)name << "\n";
	delete[] name;	// memeory freed

	name = getname();// reuse free memory
	cout << name << " at " << (int*)name << "\n";
	delete[] name;	// memory freed again
	return 0;
}

char* getname()		// return pointer to new string
{
	char temp[80]; // temporary storage
	cout << "Enter last name: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);	// copy string into smaller space
	//此处用strcoy_s时须用三个参数，两个参数会出错，因为上一行char* pn = new char[]
	//如用strcpy且忽略错误信息，须在程序开头加上#define _CRT_SECURE_NO_WARNINGS
	//如用strcpy_s，可改为strcpy_s(pn, strlen(temp) + 1,temp)

	return pn;			// temp lost when function ends
}