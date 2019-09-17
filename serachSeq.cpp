#include <iostream>

using namespace std;
int main()
{
    int classInfo[8]={101,102,104,205,206,209,303,304}, i;
    int searchItem = 310;
    i = 0;
    while (i < 8)
    {
          if (classInfo[i] == searchItem)
          {
              cout << "Found\n";
              
              break;                 
          }

          i++;    
    }
    if (i == 8)
    {
         cout << "Not Found\n";     
    }     
    cout << "\n";
    system ("pause");
    return 0;
}
