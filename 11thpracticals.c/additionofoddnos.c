
#include <stdio.h>

int main()

{ 
    int i , j , S , n ;
    i = 1 ;
    j = 0 ;

    printf("Enter number of odd numbers to be considered\n") ;
    scanf("%d\n" , &n ) ;
/*
    for ( i = 1 ; i <= (2*n - 1) ; i = i + 2 )
    {
        S = i + j ;
        j = S ;
    } */

    S = n * n ;

    printf("Sum is %d\n" , S ) ;

    return 0 ;
}