// This program prints out the number of times each character appears in the sentence.
#include <iostream>
#include <string>
using namespace std;

int main(){
    char c;
    int ar[26] ={0};

    cout << "Enter a sentence (end by '.'): " << endl;
    cin.get(c);

    while (cin.get(c)){
        if (c == '.')
        break;

        ar[c- 'a']++;
        cout<< ar[0];

    }
}