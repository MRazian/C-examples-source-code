#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "This is test. We are learning CPP .CPP is one of the programming languages.";
    
    char str1[100];
    strcpy(str1, str.c_str());
    cout << str1;
    cout << "\n";
    system ("pause");
    return 0;
}
