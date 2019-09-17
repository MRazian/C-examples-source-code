#include <iostream>

using namespace std;
int main()
{
    
    int data1[5]={1, 4, 9, 16, 19};
    int data2[6]={3, 7, 8, 10, 18, 21};
    int mergedData[11]={0};
    int i, j, k, t;
    int data1_size = 5;
    int data2_size = 6;
    k = 0;
    i = 0;
    j = 0;
    while (i < data1_size && j < data2_size)
    {
          if (data1[i] < data2[j])
          {
              mergedData[k] = data1[i];
              i++;
          }
          else
          {
              mergedData[k] = data2[j];
              j++;
          }
          k++;
    }
    
    
    for (t = i; t < data1_size; t++)
    {
        mergedData[k] = data1[t];
        k++;
    }
    
    for (t = j; t < data2_size; t++)
    {
        mergedData[k] = data2[t];
        k++;
    }
    
    
    //Print Merged Array
    for (t = 0; t < 11; t++)
    {
        cout << mergedData[t] << " ";
    }
    
    cout << "\n";
    system ("pause");
    return 0;
}
