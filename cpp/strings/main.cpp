#include <iostream>
#include <string>
using namespace std;

void swap(string &a, string &b){
    char cA, cB;
    cA = a[0];
    cB = b[0];
    b[0] = cA;
    a[0] = cB;
}

int main() {
	// Complete the program
    string A, B;
    int lenA, lenB;
    string A2, B2;
    
    cin >> A >> B;
    cout << A.length() << ' ' << B.length() << endl;
    cout << A+B << endl;
    swap(A, B);
    cout << A << ' ' << B << endl;
  
    return 0;
}