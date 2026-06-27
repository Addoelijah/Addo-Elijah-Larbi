#include <iostream>
using namespace std;

int main() 
{
	double rated_current, measured_current;
	
	cout << "Enter rated current of breaker (A): ";
	cin >> rated_current;
	cout << "Enter measured current in circuit (A): ";
	cin >> measured_current;
	
	if (measured_current > rated_current)
	{ cout << "Overload: Circuit breaker must trip!" << endl;}
	
	else { cout << "Current is within safe limit" << endl;}
	
	return 0;
}
