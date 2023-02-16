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
    char a[]; int d[];
    cout << "Enter a random string with characters and digits: " << endl;
    cin >> a[];

    get_digits (a, d);

    return 0;
}