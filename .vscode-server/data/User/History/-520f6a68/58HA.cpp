#include <iostream>
#include <string>

using namespace std;

struct Marksheet
{
    string name;
    long idnum;
    double *tests;
    float average;
    char grade;
};

int main()
{   Marksheet Student[stu];
    int stu; int num;
    cout << "Enter the number of students: " ;
    cin >> stu;
    cout << "Enter the number of test scores: " ;
    cin >> num;

    double arrayptr[num];
    //arrayptr = new double[num];{NOT USING DYNAMIC MEMORY}
    
    
    for (int i=0; i < stu; i++)
    {
        Student[i].tests = &arrayptr[num];
    //float arrayptr[num];
    cout << "Enter ID number of student " << i+1 << " : " ;
    cin >> Student[i].idnum;
    cout << "Enter the test scores of student " << i+1 << " : " ; 
    for (int i=0; i < num; i++)
    {
        cin >> Student[i].tests[i] ;
    }
    for (int i=0; i<num; i++) 
        cout << Student.tests[i]; 
    }
    
    return 0;
}
