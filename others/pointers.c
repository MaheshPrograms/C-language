#include <stdio.h>
int main ()

{
    int x ;
    x = 98 ;
    int *p = &x ;

    printf( "The value of x is %d\n", x ) ;
    printf( "The value of x is %d\n", *p ) ;
    printf( "The addrres of x is %d\n", p ) ;
    printf( "The addrres of x is %d\n", &x ) ;

    return 0 ;
}