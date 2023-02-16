#include<iostream>
using namespace std;

void get_digits (const char *str, char *digits)
{   
    while (*str != '\0'){
    
        if (*str <= '9' && *str >= '0')
        *digits = *str;
        str++;
        digits++;

    }
    cout << digits;
}

int main(){
    char arr[]= {"CSC131 MSU22"};
    char *d;

    get_digits (arr , d);

    return 0;
}