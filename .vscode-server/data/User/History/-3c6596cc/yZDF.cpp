//This program implements four of the string library functions using pointers.
#include<iostream>

using namespace std;

int strlen(char *s)
{ 
    int n;
    for ( n=0; *s != '\0'; s++)
    n++;
    return n;
}
int strcmp( char *i, char *j)
{

}

int main(){

    char str1[50]; char str2[50];
    cout << "Please enter the first string: ";
    cin >> str1;
    
    cout << "Please enter the second string: ";
    cin >> str2;
    
    cout << "The length of string 1 is: " << strlen(str1) << endl;
    cout << "The length of string 2 is: " << strlen(str2) << endl;

    return 0;


}