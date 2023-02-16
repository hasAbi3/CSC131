/// This program modifies my previous program to read an integer and a base (in integer) entered by
/// the user and displays in the given base.

#include <iostream>
using namespace std;
int main(){

    int num; 
    int base;
    int a;
    int b;
    int c ;
    int d;
    int e;

    cout << "Enter a number between 0 and 31: " ;
    cin >> num;
    cout << "Enter a base between 2 and 9: ";
    cin >> base;
    
    a = num % base;
    b = (num / base) % base;
    c = ((num/base)/base) % base;
    d = (((num/base)/base)/base) % base;
    e = ((((num/base)/base)/base)/base) % base; 

    cout << "In base " << base << ", your number is: " << e << d << c << b << a << endl ;
}