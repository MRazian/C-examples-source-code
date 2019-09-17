#include <iostream>

using namespace std;
int main()
{
    int num, d1, d2, d3;
    cout << "Please insert your number: ";
    cin >> num;
    d1 = num % 10;
    cout << "d1: "<<d1<<endl;
    num = num / 10;
    cout << "num: "<<num<<endl;
    d2 = num % 10;
    cout << "d2: "<<d2<<endl;
    num = num / 10;
    cout << "num: "<<num<<endl;
    d3 = num % 10;
    cout << "d3: "<<d3<<endl;
    cout << "Sum of digits is: " << d1 + d2 + d3 << endl;
    system ("pause");
    return 0;
}
