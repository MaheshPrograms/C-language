
#include <stdio.h>

int main()

{
    int x = 78 ;
    int *p = &x ; 
    printf("The value of x is %d\n", x ) ; 
    printf("The value of x is %d\n", *p ) ; 
    printf("The address of x is %d\n", &x ) ;
    printf("The address of x is %d\n", p ) ;
    return 0 ;
}