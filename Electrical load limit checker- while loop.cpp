#include <iostream>
using namespace std;

int main() {
    double power, total_load = 0;
    
    cout << "Enter appliance power ratings in Watts. Stops at 2000W limit.\n";
    
    while(total_load <= 2000) {
        cout << "Enter power rating: ";
        cin >> power;
        total_load += power;
        
        if(total_load <= 2000) 
            cout << "Current total load: " << total_load << " W\n";
    }
    
    cout << "Load limit exceeded! Total = " << total_load << " W > 2000W" << endl;
    return 0;
}
