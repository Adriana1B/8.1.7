#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s = "mnoneof";
	string cs = "no";
	string ss = "on";
	if (s.find_first_of(cs) != -1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	if (s.find_first_of(ss) != -1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}