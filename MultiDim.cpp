#include <iostream>

using namespace std;
int main()
{
    float grades[2][3], averages[2], sum = 0;
    int i, j;
    for (i  = 0; i < 2; i++)
    {
        cout << "****** Grades of student number " << i + 1 << " ******\n";
        for (j = 0; j < 3; j++)
        {
            cout << "Grade number " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }    
    
    for (i  = 0; i < 2; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = sum + grades[i][j];
        }
        averages[i] = sum / 3;
    }    
    
    cout << "\n*********************************************\n";
    
    for (i  = 0; i < 2; i++)
    {
        cout << "****** Grades of student number " << i + 1 << " ******\n";
        for (j = 0; j < 3; j++)
        {
            cout << "Grade number " << j + 1 << ": " << grades[i][j];
        }
        cout << " ### Average of student " << i + 1 << " is: " << averages[i] << "\n";
    }    
        
    
    
    

    cout << "\n";
    system ("pause");
    return 0;
}
