#include <iostream>
using namespace std;

/** Requests 2 integers from the user and returns the sum **/
int addition()
{
int a, b, sum;
cout << "Enter two integers: ";
cin >> a >> b;
sum = a + b;
cout << "Adding " <<  a << " + " << b << " = " << sum << "\n";
return sum;

}

