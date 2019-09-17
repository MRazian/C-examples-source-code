#include <iostream>

using namespace std;
int main()
{
    char user_operator;
    int x, y, result;
    cout << "########### Welcome to Our Basic Calculator (/, +, *, %, -) #############\n";
    
    while (1)
    {
        cin >> x;
        cin >> user_operator;
        cin >> y;
        switch (user_operator)
        {
           case '+':
               result = x + y;
               cout << "Result is: " << result << endl;
               break;
           case '-':
               result = x - y;
               cout << "Result is: " << result<< endl;;    
               break;
           case '*':
               result = x * y;
               cout << "Result is: " << result <<endl;;       
               break;
           case '/':
               result = x / y;
               cout << "Result is: " << result <<endl;;       
               break;
           case '%':
               result = x % y;
               cout << "Result is: " << result <<endl;;       
               break;
           default:
               cout << "*** Your input is incorrect. ***\n" << endl;;
        }
    }
    system ("pause");
    return 0;
}
