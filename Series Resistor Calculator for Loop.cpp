#include <iostream>
using namespace std;

int main() {
    double resistance, total = 0;
    int n = 4; // 4 resistors as per lab
    
    cout << "Enter resistance of 4 resistors in ohms:\n";
    for(int i = 1; i <= n; i++) {
        cout << "R" << i << ": ";
        cin >> resistance;
        total += resistance; // total = total + resistance
    }
    
    cout << "Total Resistance in Series = " << total << " ohms" << endl;
    return 0;
}
