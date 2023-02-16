#include <iostream>
#include <string.h>

using namespace std;

int longest = 0;
int shortest = 1000; 

int main(int argc, char *argv[])
{  

    for( int i=1 ; i < argc ; i++)
    {  
            if (strlen(argv[i]) > longest)
            {
                longest = strlen(argv[i]);
            }
            
            if (strlen(argv[i]) < shortest)
            {
                shortest = strlen(argv[i]);
            }
    }
    cout << "The difference between longest and shortest string is " << abs(longest-shortest) << endl;  
    return 0;       
}