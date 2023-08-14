#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c;
    char s[100];
    char sen[100];
    
    scanf("%c", &c);
    scanf("\n");
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n%s\n%s\n", c, s, sen);
    
    
       
    return 0;
}