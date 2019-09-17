#include <iostream>


using namespace std;
int main()
{
    string firstName = "Alirazarazian", lastName = "Ali", temp;
    int a = firstName.find("ra");

    cout << "a: "<< a << "   *****  ss: "<< string::npos << "\n";
    
        firstName.replace(a, 8, "ff");
    cout << firstName;
    cout << "\n";
    system ("pause");
    return 0;
}
