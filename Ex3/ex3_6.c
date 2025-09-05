#include <stdio.h>
#include "addPoly.h"

int main(void){
    polynomial A = {3, {4,3,5,2}}; 
    polynomial B = {4, {3,1,0,2,1}};
    polynomial C;

    printf("\n A(x) =");
    printPoly(A);
    printf("<\n B(x) =");
    printPoly(B);

    C = addPoly(A,B);
    printf("<\n C(x) =");
    printPoly(C);

    getchar(); return 0;
}