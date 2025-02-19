//hw5-12.cpp - displays the total owed
//Created/revised by <Darya Nosova> on <Feb16>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double totalOwed = 0.0;
	double priceOne = 0.0;
	double priceTwo = 0.0;

	cout<<"Enter price of item 1: ";
	cin>>priceOne;
	cout<<"Enter price of item 2: ";
	cin>>priceTwo;

	if (priceOne>priceTwo) 
		priceTwo = priceTwo / 2;
	 else if ( priceTwo>priceOne) 
		priceOne = priceOne / 2;
	

	totalOwed = priceOne + priceTwo;
	cout<<"Total owed: $"<<totalOwed<<endl;
	return 0;
}	//end of main function