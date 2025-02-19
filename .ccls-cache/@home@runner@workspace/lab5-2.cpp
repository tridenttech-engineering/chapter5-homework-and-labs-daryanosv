//lab5-2.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	 const double DISCOUNT_RATE = 0.1;
   const double DISCOUNT_SHIPING = 0.99;
	 const double REG_SHIPING= 4.99;
   double owed = 0.0;
   char member = ' ';

	cout << "Amount owed before any discount and shipping: ";
   cin >> owed;
  cout << "Premier Club member (Y/N)? ";
	 cin >> member;

	if (toupper(member) == 'Y')
  owed -= owed * DISCOUNT_RATE;

	if (owed >= 100.0)
  owed += DISCOUNT_SHIPING;
  else
	owed += REG_SHIPING;

 cout << fixed << setprecision(2);
 cout << "Amount owed after any discount and shipping: "
	<< owed << endl;
	return 0;
}	//end of main function