#include <iostream>
using namespace std;
int main()
{
    int i, j, n, s;
    cout << "Insert number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <=  n - i; s++)
        {
            cout << " ";
        }
        
        
        for (j = 1; j <= 2 * (i - 1) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }    
    cout << endl;
    system ("pause");
    return 0;
}
