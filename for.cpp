#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float avg, sum = 0, mark;
    cout << "Please number of marks: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> mark;
        sum = sum + mark;
    }
    avg = sum / n;
    cout << avg << endl;
    
    
    system("pause");
    return 0;
}
