#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	if (str.find('a') != string::npos)
	cout <<"contains a";
	else
	cout << "Does not contain a";
	
	return 0;
}
