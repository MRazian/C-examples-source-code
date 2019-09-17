#include <iostream>
using namespace std;

void banner(void)
{
     cout <<"*************************************************" << "\n";
     cout << "*** Salaam, You are using my program ************\n";
     cout <<"*************************************************" << "\n";
}

int myTest ()
{
    int temp;
    cout << "Please insert an integer number: ";
    cin >> temp;
    if (temp > 9 && temp < 100)
       return temp;
    else
        return 99;   
}

int main()
{
//    int inp;
//    inp = myTest();
//    cout << "Input: " << inp << "\n";
    banner();
    system ("pause");
    return 0;
}
