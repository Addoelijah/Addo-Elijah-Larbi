#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char ch;
	cin >> ch;
	
	if (isalpha(ch) && isupper(ch))
	cout << "uppercase letter";
	else
	cout << "Not an uppercase letter";
	
	return 0;
}
