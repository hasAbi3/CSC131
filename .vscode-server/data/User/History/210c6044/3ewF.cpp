// This program prints out the number of times each character appears in the sentence.
#include <iostream>
#include <string>
using namespace std;

int main(){
    char c;
    
    int ar[27] ={0};
    string chara = "abcdefghijklmnopqrstuvwxyz" ;

    cout << "Enter a sentence (end by '.'): " << endl;
    cin.get(c);

    while (cin.get(c)){
        if (c == '.')
        break;

        ar[c- 'a']++;}

    for ( int i = 0 ; i < 26 ; i++ ){
    cout << "Occurrences of " << chara[i] << " is " << ar[i] << endl ;
    }
}