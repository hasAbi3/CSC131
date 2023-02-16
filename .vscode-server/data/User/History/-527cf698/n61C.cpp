#include <iostream>
#include <string.h>


using namespace std;
int main()
{
   int count = 0;
   char *p ; char str[50];
   p = str; 

   
 cout << "Enter the sentence: " ;
 cin.getline(str, 50);
 
 for (int i=0 ; i < 50; i++){
 
 if (*p == 'd' && *(p+1) =='a' && *(p+2) == 'y')
 {
   count++ ;
 }
 p++;
 }
 cout << count << endl;
 }