#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	char ch;
    int i;
    stringstream ss(str);
    vector<int> A;
    while (!ss.eof()){
        ss >> i;
        ss >> ch;
        A.push_back(i);
    }
    return A;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}