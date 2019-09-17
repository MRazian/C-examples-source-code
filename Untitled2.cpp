#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    do{
          if ((i % 5)==0)
          {
                 i++;
                 continue;
          }
          cout << i << "  ";
          i++;
          
    } while (i < 20);
    cout << endl;
    system ("pause");
    return 0;
}
