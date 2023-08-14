#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> C;
    int index[q], element[q];
    
    for (int i = 0 ; i < n ; i ++){
        int k;
        cin >> k;
        vector<int> A;
        for (int j = 0 ; j < k ; j++){
            int L;
            cin >> L;
            A.push_back(L);
        }
        C.push_back(A);
    }
    
    for (int i = 0 ;  i < q; i ++){
        cin >> index[i] >> element[i];
    }
    for (int i = 0 ;  i < q; i ++){
        cout << C[index[i]][element[i]] << endl;
    }
    return 0;
}