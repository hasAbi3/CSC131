#include <iostream>
using namespace std;
int main()
{
   float kilo;
   float miles;

   cout << "Enter the number of kilometers travelled:" << endl;
   cin >> kilo;

   miles = kilo * 0.621;

   cout << "The value of " << kilo << " kilometers in miles is " << miles << endl;

   return 0;
}