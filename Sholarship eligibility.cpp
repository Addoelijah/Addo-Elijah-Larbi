#include <iostream>
using namespace std;

int main() {

double gpa;
cout << "Enter student`s GPA: ";
cin >> gpa;
if (gpa >=3.5)
cout << "Enter for engineering scholarship"<< endl;
else
cout << "Not eligible for scholarship" << endl;
	return 0;
}
