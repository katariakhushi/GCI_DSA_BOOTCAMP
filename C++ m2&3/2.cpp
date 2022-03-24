#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "\nPlease Enter Maximum Value to print Natural Numbers =  ";
	cin >> number;
	
	cout << "\nList of Natural Numbers from " << number << " to 1 are\n"; 
	for(int i = number; i >= 1; i--)
  	{
		cout << i <<" ";
  	}
		
 	return 0;
}
