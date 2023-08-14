#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    std::cin >> n >> q;

    std::string buff;
    getline(std::cin, buff); // for the buffer
    
    std::vector<std::string> lines;
    std::vector<std::string> queries;
    for (int i = 0 ; i < n ; i++)
    {   
        std::cout << i << endl;
        std::string temp;
        getline(std::cin, temp);
        lines.push_back(temp);
    }
    std::cout << "queries now" << std::endl;
    for (int i= 0 ; i < q; i++)
    {
        std::string temp;
        getline(std::cin, temp);
        queries.push_back(temp);
    } 
    
    
    
    return 0;
}