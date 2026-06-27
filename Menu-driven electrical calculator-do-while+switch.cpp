#include <iostream>
using namespace std;

int main() {
    int choice;
    double v, i, r, p, e, t;
    
    do {
        cout << "\nElectrical Calculator Menu\n";
        cout << "1. Power = V * I\n";
        cout << "2. Voltage = I * R\n"; 
        cout << "3. Resistance = V / I\n";
        cout << "4. Energy = P * T\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter V and I: "; cin >> v >> i;
                cout << "Power = " << v*i << " W\n"; break;
            case 2:
                cout << "Enter I and R: "; cin >> i >> r;
                cout << "Voltage = " << i*r << " V\n"; break;
            case 3:
                cout << "Enter V and I: "; cin >> v >> i;
                cout << "Resistance = " << v/i << " ohms\n"; break;
            case 4:
                cout << "Enter P and T: "; cin >> p >> t;
                cout << "Energy = " << p*t << " J\n"; break;
            case 5: cout << "Exiting..."; break;
            default: cout << "Invalid choice\n";
        }
    } while(choice != 5);
    
    return 0;
}
