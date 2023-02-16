///This program reads an integer entered by the user and displays it in binary.

#include<iostream>
using namespace std;
int main(){
    int num;int a;int b;int c ;int d;int e;

    cout << "Enter a number between 0 and 31: " ;
    cin >> num;

    a = num % 2;
    b = a % 2;
    c = b % 2;
    d = c % 2;
    e = d % 2;
    cout << "In binary, your number is:" << a << b << c << d << e << endl ;




}