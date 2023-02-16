// This program prints out the number of times each character appears in the sentence.
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    
    int ar[26] ={0};

    cout << "Enter a sentence (end by '.'): " << endl;
    char c;
   
    while (cin.get(c) && c!= '.'){
        c = tolower(c);
        int index= c - 'a';
        ar [index]++; }

        for (int i=0 ; i < 26 ; i++ ){
            if (arr[c] >0){
          char ch = i + 'a';
          cout << "Occurrences of " << ch << " : " << ar[index] << endl;
        }
        }
}