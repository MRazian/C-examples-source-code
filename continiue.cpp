#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        if (i % 5 == 0)
           continue;
        
        cout << i << " ";
    }
    cout << endl;
    system ("pause");
    return 0;
}
