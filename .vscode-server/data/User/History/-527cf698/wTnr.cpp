#include <iostream>
#include<cstring>

using namespace std;
int main()
{
    int n;
   char *p ; char str[n];
   p = str;
   
 cout << "Enter the sentence: " ;
 for (int i=0; i < n; i++)
 {
 cin >> str[i];
 p++;
 }
 cout << str[3];
 }