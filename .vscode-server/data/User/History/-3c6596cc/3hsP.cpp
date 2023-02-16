//This program implements four of the string library functions using pointers.
#include<iostream>

using namespace std;

int strlen (char *s)
{ 
    int n;
    for ( n=0; *s != '\0'; s++)
    n++;
    return n;
}

int strcmp (char *s1, char *s2)
{
    while (c1 != '\0' && c2 != '\0')
    {
        char c1 = *s1; char c2 = *s2;
        if (c1 >= 'a' && c1 <= 'z')
        c1 = c1 - 'a' + 'A';

        if (c2 >= 'a' && c2 <= 'z')
        c2 = c2 - 'a' + 'A';

        if (c1 < c2)
        return 1;
        else if (c2 < c1)
        return -1;
        else 
        return 0;
        s1++;
        s2++;
    }
    if (c1 == '\0' && c2 == '\0')
    return 0;
    else if (c1 < c2)
        return 1;
        else (c2 < c1);
        return -1;
}

//char * strcat (char *source, char *des)
//{

//}

//char * strcpy (char *source, char*des)
//{

//}

int main(){

    char str1[50]; char str2[50];
    cout << "Please enter the first string: ";
    cin >> str1;
    
    cout << "Please enter the second string: ";
    cin >> str2;
    
    cout << "The length of string 1 is: " << strlen(str1) << endl;
    cout << "The length of string 2 is: " << strlen(str2) << endl;

    if (strcmp(str1, str2) == 1)
    cout << "String 1 comes before string 2 alphabetically." << endl;
    else if (strcmp(str1, str2) == -1)
    cout << "String 2 comes before string 1 alphabetically." << endl;
    else (strcmp(str1, str2) == 0);
    cout << "The two strings are the same." << endl;


    return 0;


}