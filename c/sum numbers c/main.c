#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i_1;
    int i_2;
    float f_1;
    float f_2;
    
    scanf("%d %d", &i_1, &i_2);
    scanf("%f %f", &f_1, &f_2);
    
    printf("%d %d\n", i_1 + i_2, i_1 - i_2);
    printf("%.1f %.1f\n", f_1+f_2 , f_1 - f_2);
    
    
    
    return 0;
}