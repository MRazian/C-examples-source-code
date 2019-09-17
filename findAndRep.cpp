#include <iostream>
#include <string>

using namespace std;
int main()
{
    char str1 [100] = "This is test. We are learning CPP .CPP is one of the programming languages.";
    
    string str (str1);
    
    int a = 0;
    while (true)
    {
          a = str.find(" ." , a);
          if (a == -1)
           break;
          str.replace(a, 2, ". ");
          a +=2;
    }
    cout << str;
    
    cout << "\n";
    system ("pause");
    return 0;
}
