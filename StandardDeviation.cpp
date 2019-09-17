#include <iostream>
#include <cmath>
#define numOfDogs 5

using namespace std;
int main()
{
    float height[numOfDogs], average, sum = 0, temp, variance, deviation;
    
    int i;
    for (i = 0; i < numOfDogs; i++)
    {
        cout << "heghit " <<i + 1 <<": ";
        cin >> height[i];
        sum += height[i];
    }
    average = sum / numOfDogs;
    cout << "Average: " << average << "\n";
    sum = 0;
    for (i = 0; i < numOfDogs; i++)
    {
        temp =height[i]-average;
        sum += pow(temp , 2);
    }
    variance = sum / numOfDogs;
    cout << "Variance: " << variance << "\n";    
    deviation = sqrt (variance);
    cout << "deviation: " << deviation << "\n";        
    cout << "\n";
    system ("pause");
    return 0;
}
