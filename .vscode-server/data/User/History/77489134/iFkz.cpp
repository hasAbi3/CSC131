// This program asks the user to enter two strings (with a maximum length of 30) and then performs one of two
// possible operations provided as command line arguments to the program.
#include <iostream>
#include <cstring>

using namespace std;

char *intersperse(char str1[], char str2[])
{
    char *new_string = nullptr;
    new_string = new char[30];
    char *p = str1;
    char *q = str2;
    char *n= new_string ;
    
     if (strlen(str1) < strlen(str2)){
    for (; *p != '\0'; p++)
    {
        *n = *p;
        n++;
        *n = *q; 
        n++;
        q++;   
    }
    for (; *p == '\0'; p++)  
    {
        *n = *q; 
        n++;
        q++; 
    }
    }
    else if (strlen(str2) < strlen(str1)){
        for (; *q != '\0'; q++)
        {
        *n = *p;
        n++;
        *n = *q; 
        n++;
        p++; 
        }
        for (; *q == '\0'; q++)
        {
            *n = *p;
            n++;
            p++;
        } 
    }
    *n= '\0';
    cout << new_string;
    
    return n;
}
char *widen_stars( char str1[], char str2[])
{
    char *new_string = nullptr;
    new_string = new char[30];
    char *p = str1;
    char *q = str2;
    char *n= new_string ;

    while ( *p != '\0'){
        *n = *p;
        n++;
        *n = '*';
        n++;
        p++;
    }
    while(*q != '\0')
    {
        *n = *q;
        n++;
        
        *n = '*';
        n++;
        q++;
    }
    if(*q == '\0'){
        n--;
        *n = '\0';
    }
        
    *n = '\0';
    cout << new_string;
    delete [] new_string;
    return n;
}

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
            if (strcmp(argv[i], options[1])==0)
            {
                cout << "The combined string is: " << widen_stars(str1, str2) << endl;
            }
        }
return 0;
}