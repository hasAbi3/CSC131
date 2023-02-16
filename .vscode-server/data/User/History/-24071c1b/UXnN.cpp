///This program reads an integer entered by the user and displays it in binary.

#include<iostream>
using namespace std;
int main(){
    int num;
    int a;
    int b;
    int c;
    int d;
    int e;

    cout << "Enter a number between 0 and 31: " ;
    cin >> num;

    a = num % 2;
    b = (num / 2) % 2;
    c = ((num/2)/2) % 2;
    d = (((num/2)/2)/2) % 2;
    e = ((((num/2)/2)/2)/2) % 2;
    cout << "In binary, your number is: " << e << d << c << b << a << endl ;




}