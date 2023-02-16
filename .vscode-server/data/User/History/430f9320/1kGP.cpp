// This program prints out the number of times each character appears in the sentence.
#include <iostream>
#include <string>
using namespace std;

int main(){

    char c ;
    string line;
    int ar[26]= {0}; 
    string chara ="abcdefghijklmnopqrstuvwxyz";
    int count =0;
    cout << "Enter a sentence (end by '.'): " << endl;
    
    while (cin.get(c)){
        if (c=='.')
            break;
        if(c==' ')
            continue;
        
        ar[ tolower(c)- 'a']++;
        count++;
         
    } 
    for ( int i = 0 ; i <= 26 ; i++ ){
        if(ar[i]>0 && chara[i]!=' '){
            cout<<ar[i]<<" "<<chara[i]<<endl;
            cout<<"The occurance of "<<chara[i]<< " is "<<ar[i]<<endl;
        }
    }
    
    
    
}    