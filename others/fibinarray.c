#include <stdio.h>
int main ()

{
    int i, j, S, tn, n, k ;
    i = 0 ;
    j = 1 ;
/*
    printf("Enter tn \n") ;
    scanf("%d \n", &tn ) ;  */

    printf("Enter n \n") ;
    scanf("%d \n", &n ) ;

    int array [100] ;

    printf("%d \n", i ) ;
    printf("%d \n", j ) ;
/*
    for ( i = 0 ; j <= tn ; )
    {
        S = i + j ;
        printf("%d \n", S ) ;
        i = j ;
        j = S ;
    }  */

    for ( k = 0 ; k <= (n-3) ; k++  )
    {
        S = i + j ;
        i = j ;
        j = S ; 
        array[k] = j ;
        printf("%d \n", array[k] ) ;
    }


    return 0 ;
}