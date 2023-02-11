#include <stdio.h>
int fib ( int n )
{
    if ( n == 1 )
    return 0 ;

    else if ( n == 2 )
    return 1 ;

    else 
    return fib( n - 1 )  + fib( n - 2 ) ;
} 

int main()

{
    int i , j , n , S, tn ;

 /*   printf("Enter the number of terms to be printed \n") ;
    scanf( "%d\n" , &n ) ;

    for ( i = 1 ; i <= n ; i++ )
    {
        printf("%d\n" , fib(i));
    } */

    printf("Enter the last term you want to print\n ") ;
    scanf("%d\n" , &tn) ;
    i = 1 ;
    j = 0 ;

    printf("%d\n" , j) ;
    printf("%d\n" , i) ;

    for ( i = 1 ; j<tn ;)
    {
        S = i + j ;
        printf("%d\n", S) ;
        i = j ;
        j = S ;
    }

    return 0; 
}