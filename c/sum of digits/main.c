#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum=0;
    int counter = 1;
    while ( n != 0){
        sum += n%(10*counter);
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}