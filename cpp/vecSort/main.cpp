#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>




using namespace std;


int main() {
    int n;
    std::string c;
    std::vector<int> elVektor;
    
    std::cin >> n;
    std::cin.ignore();
    std::getline(std::cin, c);
    
    
    
    std::stringstream s(c);
    
    
    for(int i =0 ; i < n ; i++){
        int input=0;
        s >> input;
        elVektor.push_back(input);
    }
    
    sort(elVektor.begin(), elVektor.end());
    
    
    for(int i = 0; i < elVektor.size() ; ++i){
        std::cout << elVektor[i] << " ";
    }
    
    /*for(int element : elVektor){
        std::cout << element << " ";
    }*/
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}