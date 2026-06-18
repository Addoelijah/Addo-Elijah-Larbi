#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	
	if (num % 2 != 0 && num % 3 == 0)
	cout << "True";
	else
	cout << "False";
	
	return 0;
}
