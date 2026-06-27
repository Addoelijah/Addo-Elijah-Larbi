#include <iostream>
 using namespace std;

int main() {
	double voltage;
	cout << "Enter voltage reading (V): ";
	cin >> voltage;
	
	cout << "Voltage: " << voltage << "V - ";
	
	if(voltage < 50)
	cout << "Low voltage" << endl;
	else if (voltage >= 50 && voltage <= 120){
	cout << "Normal voltage" << endl;}
	else if (voltage > 120 && voltage <= 240)
	{ cout << "High voltage" << endl; }
	else{
	cout << "Extremely high voltage" << endl;}
	
	return 0;
}
