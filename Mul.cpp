#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
    cout << endl;
    system ("pause");
    return 0;
}
