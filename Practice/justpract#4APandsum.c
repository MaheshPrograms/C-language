#include <stdio.h>

float main()

{
    float a, d, n, tn, Sn ;

    printf("Enter first term, common difference and no. of terms\n") ;
    scanf( "%f \n" , &a ) ;
    scanf( "%f \n" , &d ) ;
    scanf( "%f \n" , &n ) ;

    for ( int i = 0 ; i <= (n-1) ; i++ )
    {
        printf("%f\n", a + (i*d) ) ;
    }

    tn  = a + (n-1) * d ;

    float i = a ; 
    float j = a + d ;
    float p = 2 ;

    do 
    {
       float S = i + j ;
       i = a + p*d ;
       p++ ;
       j = S ;
    }
    while ( i <= a + (n-1)*d ) ;

    printf("The sum is %f\n" , j ) ;

    return 0 ;

}