#include <stdio.h>
#include <math.h>

float main ()

{
    float x, h, n, D, fD, R, C, p, q, r, s, t ;

    printf("Enter the power of x, no. around which lim is to to be calculated and value of h \n") ;
    printf("Also enter the appropriate code based on type of limit\n") ;
    printf("Code for right hand limit is 1 \n") ;
    printf("Code for left hand limit is 2 \n") ;

    scanf("%f \n", &n ) ;
    scanf("%f \n", &x ) ;
    scanf("%f \n", &h ) ;
    scanf("%f \n", &C ) ;

    
    if ( C == 1 )
    {
        printf("Change in x is %f\n", h ) ;
        p = x + h ;
        q = log2(p) ;
        r = exp2(q * n) ;    

        s = log2(x) ;
        t = exp2(s*n) ;

        fD = r - t ;

        printf("Difference between f(x) is %f \n", fD ) ;

        R = fD / h ;

        printf("lim as h tends to 0 is %f \n", R ) ;

    }       

    else if ( C == 2 )
    {
        printf("Change in x is %f\n", h ) ;
        p = x - h ;
        q = log2(p) ;
        r = exp2(q * n) ;    

        s = log2(x) ;
        t = exp2(s*n) ;

        fD = t - r ;

        printf("Difference between f(x) is %f \n", fD ) ;

        R = fD / h ;

        printf("lim as h tends to 0 is %f \n", R ) ;

    }       
    

    return 0 ;
}