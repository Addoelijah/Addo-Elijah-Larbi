#include <iostream>
using namespace std;

int main() {
    double voltage;
    
    cout << "Enter up to 10 battery readings (V):\n";
    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> voltage;
        
        if(voltage < 12.0) {
            cout << "Low battery detected: " << voltage << " V. Test stopped.\n";
            break; // exit loop immediately
        } else {
            cout << "Battery voltage normal: " << voltage << " V\n";
        }
    }
    return 0;
}
