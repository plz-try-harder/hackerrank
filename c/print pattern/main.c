#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      
    int size = 2*n -1 ;
    
    for (int i = 0 ; i < size ; i ++){
        for (int j = 0 ; j < size ; j ++){
            int min;

            if (i < j) {
                min = i;
            } else {
                min = j;
            }

            if (min >= size - i - 1) {
                min = size - i - 1;
            }

            if (min >= size - j - 1) {
                
                min = size - j - 1;
            }
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}