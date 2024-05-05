#include <stdio.h>
#include <stdlib.h>




int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    //1. solution:
    /*
    int temp = 0;
    
    for(int i = 0 ; i < num/2 ; i++){
        temp = arr[num-1-i];
        arr[num-1-i] = arr[i];
        arr[i] = temp;
    }

    */

    //2. solution:
    
    int *arr2= (int*) malloc(num * sizeof(int));
    
    for (int i = num-1 ; i >= 0 ;i -- ){
        arr2[i] = arr[num -i-1];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));
    return 0;
}