#include <iostream>
#define numOfStudents 3

using namespace std;
int main()
{
    string firstNames[numOfStudents];
    string temp;
    int step, i;
    
    for (i = 0; i < numOfStudents; i++)
    {
        cin >> firstNames[i];
    }

    
    for (step = 0; step < numOfStudents -1; step++)
    {
        for (i = 0; i < numOfStudents - step - 1; i++)
        {
            if (firstNames[i] < firstNames[i+1])
            {
                temp = firstNames[i+1];
                firstNames[i+1] = firstNames[i];
                firstNames[i] = temp;
            }
        }
    }
    
    cout << "\n\n\n\nAfter Sorting\n";    
    
    for (i = 0; i < numOfStudents; i++)
    {
        cout << firstNames[i] <<"\n";
    }
    
    cout << "\n";
    system ("pause");
    return 0;
}
