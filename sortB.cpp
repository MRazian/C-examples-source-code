#include <iostream>

using namespace std;
int main()
{
    int grades[5]={2,20,5,15,0}, temp;
    int step, n=5, i;
    
    for (i = 0; i < n; i++)
        cout << grades[i] << " ";
    cout << "\n";
    
    for (step = 0; step < n -1; step++)
    {
        for (i = 0; i < n - step - 1; i++)
        {
            if (grades[i] > grades[i+1])
            {
                temp = grades[i+1];
                grades[i+1] = grades[i];
                grades[i] = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++)
        cout << grades[i] << " ";
    cout << "\n";
    system ("pause");
    return 0;
}
