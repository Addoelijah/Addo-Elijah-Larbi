#include <iostream>
using namespace std;

int main() {
    double voltage, sum = 0, average;
    
    cout << "Enter 10 voltage readings (V):\n";
    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> voltage;
        sum += voltage;
    }
    
    average = sum / 10;
    cout << "Average Voltage = " << average << " V" << endl;
    return 0;
}
