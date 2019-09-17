#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    do {
        cin >> num;
        sum = sum + num;
    } while ( num != 0); 
    cout << "Sum is: " << sum << endl;
    system ("pause");
    return 0;
}
