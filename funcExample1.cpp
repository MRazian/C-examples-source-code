#include <iostream>
using namespace std;

//int max (int a, int b)
//{
//    int m = a > b ?  a : b ;
//    return m;
//}

int sumOfDigits(int num)
{
    int y;
    int sum = 0;
    for ( ; num > 0 ; )
    {
        y = num %10;
        num = num / 10;
        sum += y;
    }
    return sum;
}
int main()
{
    //cout << max (3, 4);
    //cout << "\n";
    
    cout << sumOfDigits(123);
    cout << "\n";
    cout << sumOfDigits(1245126);
    cout << "\n";
    system ("pause");
    return 0;
}
