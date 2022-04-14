#include<iostream>
using namespace std;
int main()
{
	int number, reminder, digitProduct = 1;
	cout << "\nPlease Enter the Number to find the Digits Product =  ";
	cin >> number;
	while (number > 0)
	{
    	reminder = number % 10;
    	digitProduct = digitProduct * reminder;
    	number = number / 10;
    	cout << "\nDigit = " << reminder << " and the Digit Product = " << digitProduct;
	}
	cout << "\n\nThe Product of all Digits in a given Number = " << digitProduct;
 	return 0;
}
