// This program guess the square root of a number.
#include<iostream>
#include <math.h>
using namespace std;
int main(){

double old_guess;double n;double new_guess;

cout << "Enter a number: ";
cin >> n;
old_guess = 1.0 ;

while (abs((new_guess)*(new_guess) - n) >= 1e-5)
    {new_guess = (old_guess + (n / old_guess)) / 2.0;}
cout << new_guess;
return 0;
}