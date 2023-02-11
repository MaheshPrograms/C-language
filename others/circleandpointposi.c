
#include <stdio.h>
#include <math.h>

float dist ( float x, float y )
{
    float p = x * x ;
    float q = y * y ;
    float d = sqrt((p+q)) ;
    return d ;
}

int main()

{
    float x, y, r ;

    printf("Enter the x and y co-ordinates of point and radius of circle\n");
    scanf("%f\n", &x ) ;
    scanf("%f\n", &y ) ;
    scanf("%f\n", &r ) ;

    float d = dist ( x, y ) ;

    if ( d < r )
    {
        printf("Point lies inside circle\n") ;
    }

    else if ( r == d )
    {
        printf("Point lies on cicle\n") ;
    }

    else if ( d > r )
    {
        printf("Point lies on the circle\n") ;
    }

    
    return 0 ;
}