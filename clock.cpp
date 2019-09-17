#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	cout << "Insert delay time" << endl;
	float seconds;
	cin >> seconds;
	clock_t delay = seconds * CLOCKS_PER_SEC;
	cout << "Starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
          ;
	cout << "done\a\n";
	system ("pause");
	return 0;
}
