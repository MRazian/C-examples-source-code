#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int i, r;
    srand(time(NULL));
    
    for (i = 0; i < 10; i++)
    {
        r = rand();   
        cout << "r: "<< r <<"\n";
    }

    cout << "\n Max: " << RAND_MAX << "\n";
    system ("pause");
    return 0;
}
