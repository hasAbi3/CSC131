// This program asks the user to enter two strings (with a maximum length of 30) and then performs one of two
// possible operations provided as command line arguments to the program.
#include <iostream>
#include <cstring>

using namespace std;

char *intersperse(char str1[], char str2[])
{
    
    new_string = new char[30];
    char *p = str1;
    char *q = str2;
    char *n= new_string ;
    
    for (; *p != '\0'; p++)
    {
        *n = *p;
        n++;
        *n = *q; 
        n++;
        q++;
    }
    *n= '\0';
    cout << new_string;
    return n;
}
//char *widen_stars( char str1[], char str2[])
//{

//}

int main(int argc, char *argv[]){
    char str1[30]; char str2[30];
    cout << "Please enter a string of maximum 30 characters: " ;
    cin >> str1;
    cout << "Please enter a string of maximum 30 characters: ";
    cin >> str2;

    const char*options[] = {"-i", "-w"};
        for (int i = 1 ; i < argc; i++){
            
            if (strcmp(argv[i], options[0]) == 0)
            {
                cout << "The combined string is: " << intersperse(str1, str2) << endl;
            }
        }
    

return 0;
}