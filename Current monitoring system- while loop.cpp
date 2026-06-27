#include <iostream>
using namespace std;

int main() {
    double current = 0;
    
    cout << "Current Monitoring System\n";
    cout << "Enter current readings (A). System stops if > 10A\n";
    
    while(current <= 10) {
        cout << "Enter current: ";
        cin >> current;
        
        if(current <= 10) 
            cout << "Current OK: " << current << " A" << endl;
    }
    
    cout << "Overcurrent detected! " << current << " A > 10A. System stopped." << endl;
    return 0;
}
