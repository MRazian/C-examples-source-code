#include <iostream>
#define numOfStudents 3
#define maxFNameLength 25

using namespace std;
int main()
{
    int step;
    char firstNames[numOfStudents][maxFNameLength];
    char temp[25];
    int i;
    for (i = 0; i < numOfStudents; i++)
    {
        cout << "First name of student " << i + 1 << ": ";
        cin >> firstNames[i];
    }
    
    for (i = 0; i < numOfStudents; i++)
    {
        cout << "First name of student " << i + 1 << ": " <<firstNames[i] << "\n";
    }
    
    
    cout << "\n################## After Sorting ###################\n";
    
    for (step = 0; step < numOfStudents -1; step++)
    {
        for (i = 0; i < numOfStudents - step - 1; i++)
        {
            if (strcmpi(firstNames[i] , firstNames[i+1]) < 0)
            {
                strcpy (temp, firstNames[i+1]);
                strcpy (firstNames[i+1], firstNames[i]);
                strcpy (firstNames[i], temp);
            }
        }
    }
    
    
    for (i = 0; i < numOfStudents; i++)
    {
        cout << "First name of student " << i + 1 << ": " <<firstNames[i] << "\n";
    }

    cout << "\n";
    system ("pause");
    return 0;
}
