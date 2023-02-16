#include<iostream>
using namespace std;

void get_digits (const char *str, char *digits)
{   
    while (*str != '\0'){
    
        if (*str <= '9' && *str >= '0')
        *digits = *str;
        str++;

    }
    
}

int main(){
    char arr[]= {"CSC131 MSU22"};
    

    get_digits (arr , &d);

    return 0;
}