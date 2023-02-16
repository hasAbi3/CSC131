#include <iostream>
#include <string.h>

using namespace std;

int shortest; int longest;

int main(int argc, char *argv[])
{   
    for(int i=1 ; i < argc ; i++)
    {
        for (int j=1 ; j < argc ; j++)
        {
            if (strlen(argv[i]) > (strlen(argv[j])))
            {
                longest = strlen(argv[i]);
            }
            if (strlen(argv[i]) < (strlen(argv[j])))
            {
                shortest = strlen(argv[i]);
            }
        }
    }
    cout << "The difference between longest and shortest string is " << abs(longest-shortest) << endl;         
}