#include <iostream>
#include <string.h>

using namespace std;

int shortest; int longest;

int main(int argc, char *argv[])
{  
   longest = strlen(argv[1]);
   shortest = strlen(argv[1]);
    for( int i=1 ; i < argc ; i++)
    {
        //for (int j=2 ; j < argc ; j++)
        //{  
            
            int j=2; 
            longest = strlen(argv[i]);
            shortest = strlen(argv[i]);
            if (strlen(argv[i]) > (strlen(argv[j])))
            {
                longest = strlen(argv[i]);
                 cout << "longest " << longest<< endl;
            }
            if (strlen(argv[i]) < (strlen(argv[j])))
            {
                shortest = strlen(argv[i]);
                
            }
            j++;
        //}
    }
    cout << "longest " << longest<< endl;
    cout << "shortest " << shortest<< endl;
    cout << "The difference between longest and shortest string is " << abs(longest-shortest) << endl;         
}