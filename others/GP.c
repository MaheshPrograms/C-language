#include <stdio.h>
#include <math.h>

float p ( float r )
{
    return log2(r) ;
}
float main()

{
    float a, r, n, tn, Sn, ti, i, j, S ;

    printf("Enter the first term, common ratio and number of terms \n") ;
    scanf( "%f \n" , &a ) ;
    scanf( "%f \n" , &r ) ;
    scanf( "%f \n" , &n ) ;

    for ( i = 0 ; i <= ( n-1 ) ; i++ )
    {
        ti = a * exp2( p(r) * i ) ;
        printf( "%f\n" , ti ) ;
    }

    printf("The last term is %f\n" , a * exp2( p(r) * (n - 1) )) ;

    j = 0 ;

    for ( i = 0 ; i <= (n-1) ; i++ )
    {
        ti =  a * exp2( p(r) * i ) ;
        S = ti + j ;
        j = S ;
    }

    printf("Sum is %f \n" , j ) ;

    return 0 ;
    
}