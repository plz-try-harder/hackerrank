#include <stdio.h>

void update(int *a,int *b) {
        int a2 = *a;
        int b2 = *b;
        
        *a = a2 + b2;
        if( a2 >= b2 ){
            *b = a2 - b2;
        }else{
            *b = b2 - a2;
        }
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}