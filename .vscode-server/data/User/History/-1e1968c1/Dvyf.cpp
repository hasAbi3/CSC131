//This program asks the user to enter a sentence ended by a period, a question mark, or an exclamation mark 
//and prints out the number of space characters (spaces, new lines, tabs) in that sentence.
// Abisha Ghimire
#include <iostream>
#include <string>
using namespace std;

int characters = 0 ;
int new_lines = 0 ;
int tabs = 0 ;

int main(){
    string c;
    cout << "Enter a sentence (end by '.' or '?' or '!'): " << endl;
    
    getline(cin, c);
    while (cin.get(c) || c=='.' || c== '?' || c== '!'  ){
        switch(c){
            case '.\n' : new_lines++ ; break;
            case ' '   : characters++ ; break;
            case '    ': tabs++ ; break;
        }
    }
    
cout << "Number of space characters: " << characters << endl;
cout << "Number of new line characters: " << new_lines << endl;
cout << "Number of tabs: " << tabs << endl;

}