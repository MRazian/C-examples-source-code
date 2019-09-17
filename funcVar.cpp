#include <iostream>
using namespace std;

int myTest(int x)
{
    x = 4;
}

int main()
{
    int result, x;
    x = 3;
    cout << x << endl;
    myTest(x);
    cout << x << endl;
    system ("pause");
    return 0;
}
