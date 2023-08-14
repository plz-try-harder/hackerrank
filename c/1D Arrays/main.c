#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=0;
    scanf("%d", &n);
    
    int *Array = (int*)malloc(n*sizeof(int));
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &Array[i]);
    }
    for(int i = 0 ; i < n ; i++){
        sum+=Array[i];
    }
    free(Array);
    printf("%d",sum);
    
    return 0;
}