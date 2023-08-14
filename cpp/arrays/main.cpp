#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    int A[size];
    for (int n = 0 ; n < size ; n++)
    {
        cin >> A[n];
    }
    for (int n = size-1; n >= 0 ; n--)
    {
        cout << A[n] << ' ';
    }
    return 0;
}