
#include <stdio.h>
#include <math.h>

float main ()

{
    float a, b, c, D, R1, R2 ;

    printf("Enter the a, b, c \n") ;
    scanf("%f \n", &a) ;
    scanf("%f \n", &b) ;
    scanf("%f \n", &c) ;

    printf(" %f x^2 + %f x + %f ", a, b, c ) ;

    D = sqrt( (b*b - 4*a*c) ) ;

    R1 = (-b + D) / (2*a) ;
    R2 = (-b - D) / (2*a) ;

    printf("Roots are %f and %f \n", R1 , R2 ) ;

    return 0 ;
}
