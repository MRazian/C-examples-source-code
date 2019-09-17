#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1, i;
    
    cin >> n;
    for (i = n; i > 1; i--)
    {
        fact *= i;
    }
    cout << "Factorial: " << fact << endl;
    system ("pause");
    return 0;
}
