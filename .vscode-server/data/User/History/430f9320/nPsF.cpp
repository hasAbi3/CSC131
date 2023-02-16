// This program prints out the number of times each character appears in the sentence.
#include <iostream>
#include <string>
using namespace std;

int main(){

    char c ;
    string line;
    int ar[26]= {0}; 
    int count =0;
    cout << "Enter a sentence (end by '.'): " << endl;
    
    cin.getline(line);
    while (count<line.length()){
        if (line[count]=='.')
            break;
      cout<< line[count]<<" "<<line[count]-'a'<<endl;
        ar[ line[count]- 'a']++;
        count++;
         
    } 
    for ( int i = 0 ; i <= 26 ; i++ )
    cout << ar[i];
    
}    