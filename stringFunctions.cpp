#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char statement[100]="Semnan Tehran Shiraz Isfahan";
    char searchKey[] = "Shiraz";
    
    if (strstr(statement,searchKey))
    {
        cout << "Found.";
    }
    else
    {
        cout << "Not Found.";
    }
        
    cout << "\n\n";
    system ("pause");
    return 0;
}
