// Assignment10 - Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"
#include "vector"
#include "ctime"
#include "cstdlib"

using namespace std;

//declaring the functions
int numMultiply(int* x, int y);
string* randomVector(vector<string>& vect, string* hold);

int main()
{
	//initializing some pointers
	int num = 100;
	int* pInt = &num;
	string stuff = "";
	string* pstuff = &stuff;
	

	vector<string> clothing = { { "hat" },{ "socks" },{ "shirt" },{ "pants" },{ "underwear" } };
	vector<string>& Rclothing = clothing;

	//runs the functions
	numMultiply(pInt, 2);
	//sets the pointer pstuff = to the random item in Rclothings vector
	pstuff = randomVector(Rclothing, pstuff);


	cout << *pstuff << endl;

	system("pause");
	return 0;
}

int numMultiply(int* x, int y)
{
	//multiplys what is in x to y and returns x
	*x = *x * y;
	cout << *x << endl;
	return *x;
}
//takes a reference to a vector and apointer to a string variable
string* randomVector(vector<string>& vect, string* hold)
{
	//choosess a ramdom item from the vector and returns it to the pointer
	srand(unsigned int(time(NULL)));
	int i = rand() % ((vect.size()) - 1);
	hold = &vect[i];

	return hold;
}
