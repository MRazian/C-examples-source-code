#include <iostream>
#include <climits>
using namespace std;
int main ()
{
    short x = 12;
    cout << "size of x: "<< sizeof x <<endl;
    cout << "Max of short int: " << SHRT_MAX << endl;
    cout << "Max of short int: " << SHRT_MIN << endl;
    
    short int z = SHRT_MAX + 1;
    cout << "z is: " << z <<endl;
    
    unsigned short int y = SHRT_MAX + 1;
    cout << "y is: " << y <<endl;    
    
    long long int l;
    cout << "size of l: "<< sizeof l <<endl;
    
    system ("pause");
    return 0;
}
