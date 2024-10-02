//
//  main.cpp
//  class score calculator
//
//  Created by maya nachiappan on 10/2/24.
//


#include <iostream>
using namespace std;

int main()
{
    int max; // maximum amount of grades that can be taken
    double sum=0.0;
    int count=0;
    double grade;
    
    // inputting the amount of grades
    cout << "enter the amount of students you have: " << endl;
    cin >> max;
    
    double grades[max];
    
    for (int i=0; i<max; i++)
    {
        cout << "enter grade " << i+1 <<":" << endl;
        cin >> grade;
        
        
        grades[count] = grade;
        sum += grade;
        count++;
        
    }
    
        
  if (count>0)
{
    double average=sum/max;
    cout << "the average of the students are: "<< average << endl;
}
else
{
    cout << "no grades were entered" << endl;
}
return 0;
}

