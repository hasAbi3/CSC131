// This program asks the user to input two numbers n and m and then finds the mean of the numbers from n to m.
// Abisha Ghimire

#include <iostream> 
using namespace std;
int main(){
 
int n; int m;	
int total = 0;	// total holds the sum of the first n positive numbers 
int number;	// the amount of numbers
float mean;	// the average of the first n positive numbers

cout << "Please enter a positive integer" << endl;
cin >> n;
cout << "Please enter another positive integer" << endl;
cin >> m;


if (n > 0 && m > 0 && m > n){
for (number = n ; number <= (m - n + 1); number++){
total = total + number;
} // curly braces are optional since there is only one statement

mean = static_cast<float>(total) / (m - n + 1); // note the use of the typecast operator here
cout << "The mean average of the first " << value << " positive integers is " << mean << endl;
}
else
cout << "Invalid input - integer must be positive" << endl;

return 0;
}
