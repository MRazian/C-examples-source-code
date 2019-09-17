#include <iostream>
using namespace std;
int main()
{
    int n ,rev = 0, y, temp; 
    cout << "Please insert any integer number: ";
    cin >> n;
    temp = n;
    while(temp > 0)
    {
        y = temp % 10;
        temp /= 10;
        rev = rev * 10 + y;
    }
    cout << "Reverse of " << n << " is: " << rev;
    cout << endl;
    system ("pause");
    return 0;
}
