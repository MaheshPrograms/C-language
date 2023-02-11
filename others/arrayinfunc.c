#include <stdio.h>

float avg ( float arr[] , float n )
{
    float j, S, A ;
    j = 0 ;
    
    for ( int i = 0 ; i <= (n-1) ; i++ )
    {
        S = arr[i] + j ;
        j = S ;
    }

    A = j / n ;

    return A ;
}

float main ()

{
    float arr[] = { 1, 12, 32, 15, 26 } ;
    float n = 5 ;

    printf("%f\n", avg(arr , n)) ;

    return 0 ;
}