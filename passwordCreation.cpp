#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string passwordCreation(string username)
{
       string specialChars = "!@#$%^&*<>?";
       string password;
       string t1, t2;
       int r;
       char randNum[4] = {};
       t1 = username[0];
       t2 = username[1];
       password += t1;
//       cout << "password: " << password <<"\n";
       password += t2;
//       cout << "password: " << password <<"\n";
       srand(time(NULL));
       
       r = rand() % 10;
       randNum[0] = r + 48;
       r = rand() % 10;
       randNum[1] = r + 48;
       r = rand() % 10;
       randNum[2] = r + 48;
       
       string digits (randNum);
//       cout << "digits: " << digits << "\n";
       
       password += digits;
//       cout << "password: " << password <<"\n";
       
       r = rand() % 11;
       string s;
       s = specialChars[r];
       password += s;
//       cout << "password: " << password <<"\n";
              
       t1 = username[2];
       t2 = username[3];
       password = password + t1 + t2;
//       cout << "password: " << password <<"\n";
                     
       return password;    
}
int main()
{
    
    string pass = passwordCreation("razian"); 
    cout << "Created password is: " << pass << "\n";
    pass = passwordCreation("laitec"); 
    cout << "Created password is: " << pass << "\n";
    system ("pause");
    return 0;
}
