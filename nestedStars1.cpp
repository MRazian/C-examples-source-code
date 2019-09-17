#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Insert number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }    
    cout << endl;
    system ("pause");
    return 0;
}
