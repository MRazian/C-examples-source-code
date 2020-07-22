#include <iostream>

using namespace std;
int main()
{
    int classInfo[8]={101,102,104,205,206,209,303,304}, size = 8;
    int searchItem = 340;
    int mid, low = 0, high = size - 1;
    bool flag = false;
    
    
    while (low <= high)
    {
          mid = (low + high) / 2;
          if (searchItem > classInfo[mid])
          {
              low = mid + 1;
          }
          else if (searchItem < classInfo[mid])
          {
              high = mid - 1;
          }
          else
          {
              flag = true;
              break;
          }
    }
    if (flag == true)
         cout << "Found \n";

    else
         cout << "Not Found \n";
    
    
    cout << "\n";
    system ("pause");
    return 0;
}
