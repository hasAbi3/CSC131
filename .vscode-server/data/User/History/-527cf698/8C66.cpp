#include <iostream>
#include<cstring>

using namespace std;
int main()
{
    int n;
   char *p ; char str[5];
   p = str;
   
 cout << "Enter the sentence: " ;
 for (int i=0; i < 5; i++)
 {
 cin >> str[i];
 p++;
 }
 cout << str[2];
 }