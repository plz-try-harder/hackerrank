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
    int q; std::cin >> q;
    std::set<int> sit;
    std::vector<string> printing;
    
    for ( int i = 0 ; i <= q ; i++){
        std::string query;
        int type;
        std::getline(std::cin , query);
        std::stringstream s(query);
        
        s >> type;
        if(type == 1){
            int n;
            s >> n;
            sit.insert(n);
            
        }else if(type == 2){
            int n;
            s >> n;
            sit.erase(n);
            
        }else if(type == 3){
            int n;
            s >> n;
            std::set<int>::iterator itr = sit.find(n);
            
            if(itr == sit.end()){
                printing.push_back("No");
            }else if (itr != sit.end()) {
                printing.push_back("Yes");
            }
            
        }
         
        
    }
    
    for (int i = 0 ; i < printing.size(); i++){
        std::cout << printing[i] << std::endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
