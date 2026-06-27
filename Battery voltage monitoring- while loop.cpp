#include <iostream>
using namespace std;

int main() {
    double voltage = 12.0; // start above threshold
    
    cout << "Battery Voltage Monitor\n";
    cout << "Enter voltage readings (V). Stops if < 12V\n";
    
    while(voltage >= 12) {
        cout << "Enter voltage: ";
        cin >> voltage;
        
        if(voltage >= 12) 
            cout << "Battery OK: " << voltage << " V" << endl;
    }
    
    cout << "Battery low! " << voltage << " V < 12V. Recharge needed." << endl;
    return 0;
}
