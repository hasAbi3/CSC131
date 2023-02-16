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
    
    getline(cin,line);
    while (count<line.length()){
        if (line[count]=='.')
            break;
        if(line[count]==32)
        continue;
        ar[ tolower(line[count])- 'a']++;
        count++;
         
    } 
    for ( int i = 0 ; i <= 26 ; i++ ){
        cout<<ar[i]<<endl;
        if(ar[i]>0){
            cout<<"The occurance of "<<chara[i]<< " is "<<ar[i]<<endl;
        }
    }
    
    
    
}    