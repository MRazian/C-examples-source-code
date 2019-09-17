#include <iostream>
#define numOfContacts 3
#define maxContactNameLength 25
using namespace std;
int main()
{
    char phoneBook[2][numOfContacts][maxContactNameLength];
    char temp[maxContactNameLength];
    int i;
    for (i = 0; i < numOfContacts; i++)
    {
        cout << "Name of contact: " << i + 1 << ": ";
        cin >> phoneBook[0][i];
        cout << "Phone number of contact: " << i + 1 << ": ";
        cin >> phoneBook[1][i];
        
    }
   
   /*
    for (i = 0; i < numOfContacts; i++)
    {
        cout << "First name of contact " << i + 1 << ": " << phoneBook[0][i] << "\n";
        cout << "Phone number of contact " << i + 1 << ": " << phoneBook[1][i] << "\n";        
        cout << "#############################\n";
    }
  */
    
    cout << "Insert your name for searching in phone book: ";
    cin >> temp;
    
    for (i = 0; i < numOfContacts; i++)
    {
        if (strcmpi(phoneBook[0][i],temp) == 0)
        {
            cout << "Phone Number is: " << phoneBook[1][i];
        }
        
    } 

    cout << "\n";
    system ("pause");
    return 0;
}
