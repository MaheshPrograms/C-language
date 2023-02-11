
#include <stdio.h>
#include <stdio.h>

#define Pi = 3.142857

float angle ( float n )
{
    return ((3.142857)/n) ;
}


float main ()

{ 
    float R, n, l, C, R0, x ;

    printf("Enter radius and number of sides \n") ;
    scanf( "%f \n" , &R ) ;
    scanf( "%f \n" , &n ) ;

    printf( "You have entered %f as your radius and %f as no. of sides \n", R, n ) ;
    printf("Angle subtended is %f \n" , 2*angle(n) ) ;

    x = angle(n) ;
    l = 2 * R * sin(x) ;
    printf("Length of each side is %f \n" , l ) ;

    C = n * l ;
    printf("Circumference is %f \n" , C ) ;

    R0 = C / (2*R) ;
    printf("Ratio is %f \n" , R0 ) ;

    return 0 ;
}