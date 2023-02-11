
#include <stdio.h>

int fib(int n ) 
{
    if( n == 1 )
        return 0 ;

    else if ( n == 2 )
        return 1 ;
    
    else
    return (fib(n-1) + fib (n-2) ) ;

    return 0 ;
}

int main()

{
    int n , i ;

    printf("Enter the index number of the term\n");
    scanf("%d\n" , &n) ;

    for ( i = 1 ; i <= n ; i++ ) 
        {
            printf("%d\n" , fib(i) ) ;
        }


    return 0;
}