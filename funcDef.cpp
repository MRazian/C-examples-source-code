#include <iostream>
using namespace std;

int razian_sum(int x, int y);


int main()
{
    int result, num1, num2;
    num1 = 3;
    num2 = 4;
    result = razian_sum(num1 , num2);

    cout << result << endl;

    system ("pause");
    return 0;
}

int razian_sum (int x, int y)
{
    int z;
    z = x + y;
    return z;
}
