#include <iostream>

using namespace std;
int main()
{
    int grades[5]={16,20,18,19,17}, temp;
    int n=5, i, j, minIndex;
    //Our array before sorting
    for (i = 0; i < n; i++)
        cout << grades[i] << " ";
    cout << "\n";
    //Sorting Algorithm (Selection Sort)
    for (i = 0; i < n-1; i++)
    {
        minIndex = i;
        for(j = i + 1; j < n; j++)
        {
              if (grades[j] < grades[minIndex])
                 minIndex = j;
        }
        if (minIndex != i)
        {
            temp = grades[i];
            grades[i] = grades[minIndex];
            grades[minIndex] = temp;
        }
    }
    //Our array after sorting
    for (i = 0; i < n; i++)
        cout << grades[i] << " ";
    cout << "\n";
    system ("pause");
    return 0;
}
