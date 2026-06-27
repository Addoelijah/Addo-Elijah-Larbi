#include <iostream>
using namespace std;

int main(){
	int choice;
	
	cout << "Electrical Components Menu\n";
	cout << "1. Resistor\n";
	cout << "2. Capacitor\n";
	cout << "3. Inductor\n";
	cout << "Enter your choice (1-3):";
	cin >> choice;
	
	switch(choice) {
		case 1:
			cout << "Resistor: used to limit current in a circuit" << endl;
			break;
			case 2:
				cout << "Capacitor: used to store electrical energy" << endl;
				break;
				case 3:
					cout << "Inductor: used to store energy in a magnetic field" << endl;
					break;
					default:
					cout << "Invalid choice" <<endl;
					
					
					return 0;
	}
}
