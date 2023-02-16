#include <iostream>
#include <string>

using namespace std;

struct Marksheet
{
    string name;
    long idnum;
    int *tests;
    float average;
    char grade;
};

int main()
{   
    int stu; int num;
    cout << "Enter the number of students: " ;
    cin >> stu;
    cout << "Enter the number of test scores: " ;
    cin >> num;

    Marksheet Student[stu];
    int test_scores[num];
    //arrayptr = new double[num];{NOT USING DYNAMIC MEMORY}
    
    for (int i=0; i < stu; i++)
    {
    //float arrayptr[num];
    Student[i].tests = &test_scores[i];
    cout << "Enter ID number of student " << i+1 << " : " ;
    cin >> Student[i].idnum;
    cout << "Enter the test scores of student " << i+1 << " : " ; 
    int average=0;
    for (int i=0; i < num; i++)
    {   
        cin >> test_scores[i] ;
        average += *Student[i].tests++;
        cout << average; 
         
    }

    
    }
    return 0;
}
