#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <sstream> 


//for stringstream to work
//#include  <bits/stdc++.h>
using namespace std;


int main() {  
    int q = 0;
    cin >> q; 
    //vector<int> queries;
    set<int> set;
    
    
    for (int i = 0 ; i < q ; i++){
        int choice;
        int element;
        cin >> choice >> element;
        if(choice == 1){
            set.insert(element);
        }else if(choice == 2){
            set.erase(element);
        }else if (choice == 3){
            if(set.find(element) != set.end()){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
        
    }
    
    return 0;
}

