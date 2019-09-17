#include <iostream>
#define numOfStudents 3
#define maxFNameLength 25
using namespace std;
int main()
{
    char firstNames[numOfStudents][maxFNameLength];
    char temp[25];
    int i;
    for (i = 0; i < numOfStudents; i++)
    {
        cout << "First name of student " << i + 1 << ": ";
        cin >> firstNames[i];
    }
 /*   
    for (i = 0; i < numOfStudents; i++)
    {
        cout << "First name of student " << i + 1 << ": " <<firstNames[i] << "\n";
    }
*/   
    
    cout << "Insert your name for searching: ";
    cin >> temp;
    
    for (i = 0; i < numOfStudents; i++)
    {
        if (strcmpi(firstNames[i],temp) == 0)
        {
            cout << "Found\n";
        }
        
    } 
  
    cout << "\n";
    system ("pause");
    return 0;
}
