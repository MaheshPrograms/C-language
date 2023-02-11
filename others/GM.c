
#include <stdio.h>
#include <math.h>

float GM ( float x, float y )
{
    return sqrt(x*y) ;
}

float main ()

{
    float x, y ;
    printf("welcome to Geometric mean calculator : /n");
    printf("Enter the numbers \n") ;
    scanf("%f \n", &x ) ;
    scanf("%f \n", &y ) ;

    printf("The geometric mean is %f \n", GM(x,y)) ;

    return 0 ;
}
