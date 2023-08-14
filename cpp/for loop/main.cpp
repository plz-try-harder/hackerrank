#include <iostream>
#include <cstdio>
using namespace std;

void toNumba(int n);
bool isOdd(int n);
bool isEven(int n);

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    
    if(a <= b )
    {
       for (int n = a; n <= b; n++)
       {
           toNumba(n);
       }
       for (int n = 10; n <= b; n++ )
       {
           if (isOdd(n)){
               cout << "odd" << endl;
           }else{
               cout << "even" << endl;
           }
       }
    }
    
    return 0;
}

void toNumba(int n)
{
    switch(n)
    {
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two\n";
            break;
        case 3:
            cout << "three\n";
            break;
        case 4:
            cout << "four\n";
            break;
        case 5:
            cout << "five\n";
            break;
        case 6:
            cout << "six\n";
            break;
        case 7:
            cout << "seven\n";
            break;
        case 8:
            cout << "eight\n";
            break;
        default:
            cout << "nine\n";
            break;
    }
}


bool isOdd(int n)
{
    if (n % 2 == 0){
        return false;
    }else{
        return true;
    }
}

bool isEven(int n)
{
    return !isOdd(n);
}