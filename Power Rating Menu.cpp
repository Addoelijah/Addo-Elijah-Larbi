#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, power;
    
    cout << "Power Calculation Menu\n";
    cout << "1. Calculate Power from Voltage & Current\n";
    cout << "2. Calculate Energy = Power * Time\n";
    cout << "Enter choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter voltage (V) and current (A): ";
            cin >> voltage >> current;
            power = voltage * current;
            cout << "Power = " << power << " Watts" << endl;
            break;
        case 2: {
            double time;
            cout << "Enter power (W) and time (s): ";
            cin >> power >> time;
            double energy = power * time;
            cout << "Energy = " << energy << " Joules" << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}
