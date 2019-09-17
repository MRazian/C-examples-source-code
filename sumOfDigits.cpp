#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, y;
    cin >> num;
    for ( ; num > 0 ; )
    {
        y = num %10;
        num = num / 10;
        sum += y;
    }
    cout << sum << endl;
    system ("pause");
    return 0;
}
