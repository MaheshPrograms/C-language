#include <stdio.h>

int main()

{
    int i , j , S , a , n ;
    i = 1 ;
    j = 0 ;

    printf("Enter the limiting number\n") ;
    scanf("%d\n" , &n ) ;

    for ( i = 1 ; i <= n ; i++ )
    {
        S = i*i + j ;
        j = S ;
    }

    printf("The sum is %d\n" , j ) ;

    return 0 ;
}