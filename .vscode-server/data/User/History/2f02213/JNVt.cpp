#include <iostream>
#include <string.h>

using namespace std;

int shortest; int longest;

int main(int argc, char *argv[])
{  
   longest = 0;
   shortest = 0;
    for( int i=1 ; i < argc ; i++)
    {
        for (int j=2 ; j < argc ; j++)
        {  
            if (strlen(argv[i]) > (strlen(argv[j])))
            {
                longest = strlen(argv[i]);
                cout << "longest " << longest<< endl<< endl;
            }
            else
            //if (strlen(argv[i]) < (strlen(argv[j])))
            {
                shortest = strlen(argv[i]);
                cout << "shortest " << shortest<< endl << endl;
                
            }
            j++;
        }
        cout << "longest : " << longest << " shortest " << shortest ;
    }
    cout << "longest " << longest<< endl;
    cout << "shortest " << shortest<< endl;
    cout << "The difference between longest and shortest string is " << abs(longest-shortest) << endl;  
    return 0;       
}