#include <iostream>
#define numOfStu 5
using namespace std;
int main()
{

    int i;
    float marks[numOfStu], avg, sum = 0;
    for (i = 0; i < numOfStu; i++)
    {
        cout << "Insert mark " << i + 1 <<":";
        cin >> marks[i];
        sum = sum + marks[i];
    }
    avg = sum / numOfStu;
    cout << "average: " << avg <<endl;
    
    cout << endl <<"#################### Grades #################" <<endl;
    for (i = numOfStu -1; i >= 0; i--)
    {
        cout << marks[i] << " ";
    }
    cout << "\n";
    system ("pause");
    return 0;
}
