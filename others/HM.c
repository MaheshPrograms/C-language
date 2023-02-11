#include <stdio.h> 

float HP ( float x , float y )
{
    return ((2*x*y)/(x+y)) ;
}

float main ()

{
    float x, y ;
    printf("Enter the numbers\n") ;
    scanf("%f\n", &x) ;
    scanf("%f\n", &y) ;

    printf("%f\n" , HP( x, y ) );

    return 0 ;
}