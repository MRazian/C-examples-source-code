#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, n;
    float sum = 0, avg = 0, mark;
    cout << "Number of Students: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        cout << "################" << endl;
        cout << "Student " << i + 1 << endl;
        for (j = 0; j < 3; j++)
        {
            cout << "Insert Mark " << j + 1 << ": ";
            cin >> mark;
            sum = sum + mark;
        }
        avg = sum / 3;
        cout << "Average for student " << i + 1 << " : "<< avg << endl;
    }
    cout << endl;
    system ("pause");
    return 0;
}
