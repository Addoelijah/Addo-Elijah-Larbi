#include <iostream>
using namespace std;

int main() {
    int password;
    
    do {
        cout << "Enter password to access control panel: ";
        cin >> password;
        
        if(password != 2000) 
            cout << "Incorrect password. Try again.\n";
            
    } while(password != 2000); // repeat until correct
    
    cout << "Access granted to electrical control panel." << endl;
    return 0;
}
