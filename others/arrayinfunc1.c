#include <stdio.h>

float avg ( float arr[] , float n )
{
    float S, A, j = 0 ;

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
    float arr[1000], n ;
    printf("Enter the number of observations and observations\n") ;
    scanf("%f\n", &n ) ;
    
    for ( int i = 0 ; i <= (n-1) ; i++ )
    {
        scanf("%f\n", &arr[i] ) ;
    }

    printf("Average is %f\n", avg(arr, n )) ;

    return 0 ;
}