#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    char ch1, ch2, ch3, ch4;
    int i = 0;
    cout << "*** Please insert your password. ***\n";
    while (i < 3)
    {
        ch1 = getch();
        putchar ('*');
        ch2 = getch();
        putchar ('*');
        ch3 = getch();
        putchar ('*');
        ch4 = getch();
        putchar ('*');
        
        if (ch1 == 'a' && ch2 == 'b' && ch3 == 'c' && ch4 == 'd')
        {
            cout << "\nYou are valid user.\n";
            break;
        }
        else
        {
            cout << "\nSorry, please try again...\n";
            if (i == 2)
            {
                  cout << "\nYou have incorrectly inserted your password 3 times, please try again in 10 seconds.\n";
                  Sleep(10000);
                  cout <<"\nNow you can insert your password.\n";
                  i = 0;
            }
        }
        i++;
    }
    cout << endl;
    system ("pause");
    return 0;
}
