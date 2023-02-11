#include <stdio.h>
int main()

{
    int i , n, S ;

    printf("Enter the No. of terms to be printed\n") ;
    scanf( "%d\n" , &n ) ;

    for ( i = 1 ; i <= n ; i++ )
    {
        printf ( "%d\n" , i * i ) ;
    }

    int j = 0 ; 
    for ( i = 1 ; i <= n ; i++ )
    {
        S = i*i + j ;
        j = S ;
    }

    printf("Sum is %d\n" , j ) ;

    return 0 ;
}