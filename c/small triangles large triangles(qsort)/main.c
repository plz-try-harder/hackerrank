#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area_of_triangle(triangle tr){
    double p = (tr.a + tr.b +tr.c)/2.0;
    return sqrt(p * (p - tr.a ) * (p - tr.b ) * (p - tr.c ) );
}

int cmprfunc(const void* a, const void* b) {
    //const triangle* tr1 = (const triangle*)a;
    //const triangle* tr2 = (const triangle*)b;
    
    double area1 = area_of_triangle(*(const triangle*)a);
    double area2 = area_of_triangle(*(const triangle*)b);
    
    if (area1 < area2)
        return -1;
    else if (area1 > area2)
        return 1;
    else
        return 0;
}


void sort_by_area(triangle* tr, int n) {
	
    
    qsort(tr , n , sizeof(triangle), cmprfunc);  
    /**
	* Sort an array a of the length n
	*/
}



int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}