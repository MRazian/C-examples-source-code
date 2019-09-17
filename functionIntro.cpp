#include <iostream>
using namespace std;
int main()
{
    int i;
    float averages[10]={19.44, 18.22, 17.69, 18.54, 19.44, 17.33, 18.01, 19.78, 17.92, 18.86};
    string names[10]={"Ahmadi", "Khani", "Fatemi", "Heydari", "Alavi", "Ghorbani", "Fateh", "Emadi", "Salaar", "Soltan"};
    cout << "################################################################################\n";
    cout << "/////////////////////////////////////Student Information////////////////////////\n";    
    cout << "\n";
    system("color 7A");
        cout << "                                 -------------------------               \n";
    cout << "                                |"<<"   Average"<<" |   "<<"Names     |"<<"    \n";
    cout << "                                 -------------------------               \n";
    for (i = 0; i < 10; i++)
    {
        cout << "                                   "<<averages[i]<<"   |   "<<names[i]<<"    \n";
        cout << "                                 -------------------------               \n";
    }
    cout << "################################################################################\n";
    
    system ("pause");
    return 0;
}
