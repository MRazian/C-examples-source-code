#include <iostream>

using namespace std;
int main()
{
    int status;
    cin >> status;
    switch (status)
    {
           case 1:
                cout << "**** \n";
                break;
           case 2:
                cout << "*** \n";
                break;
           case 3:
                cout << "** \n";
                break;
    }
                
    system ("pause");
    return 0;
}
