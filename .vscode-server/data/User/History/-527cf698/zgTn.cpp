#include <iostream>
#include<cstring>

using namespace std;
int main()
{
   int n;
   int count = 0;
   char *p ; char str[50];
   p = str; 

   
 cout << "Enter the sentence: " ;
 cin >> str;
 
 for (int i=0 ; i < 50; i++){

 if (*p == 'd' && *(p+1) =='a' && *(p+2) == 'y')
 {
   count++ ;
 }
 p++;
 }
 cout << count;
 }