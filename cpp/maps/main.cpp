#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include  <bits/stdc++.h>
#include <sstream> //for stringstream to work
using namespace std;


int main() {
    int q;
    
    std::map<string, int> the_map;
    std::vector<int> printing;
    std::cin >> q;
    
    for (int i = 0 ; i <= q ; i++){ // for some reason i<q only takes a query less than expected so i had to change it to i <= q
        string query;
        int type;
        
        std::getline(std::cin , query);
        std::stringstream s(query);
        s >> type;
        if(type == 1){
            string name;
            int marks;
            s >> name;
            s >> marks;
            
            
            map<string, int>::iterator itr = the_map.find(name); // searching for the key
            if (itr == the_map.end()) // if the key not present
            { 
                the_map.insert(make_pair(name, marks)); // add the new key and value
            }else
            {
                itr->second += marks; // if present then add the marks to the value
            }
            
        }else if(type == 2){
            string name;
            s >> name;
            
            the_map.erase(name);
        }else if(type == 3){
            string name;
            s >> name;
            
            map<string,int>::iterator itr = the_map.find(name);
            
            if(itr == the_map.end())
            {
                printing.push_back(0);
            }else {
                printing.push_back(the_map[name]);
            }
            
        }
        
    }
    
    for (int i = 0 ; i < printing.size() ; i++){
            std::cout << printing[i] << std::endl;
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
