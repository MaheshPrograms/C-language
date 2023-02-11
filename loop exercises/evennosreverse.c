#include <stdio.h>
int main () 

{
    int i, n, x, y, S ;

    printf("Enter no. of terms to be print\n") ;
    scanf( "%d\n", &n ) ;
    i = 2*n ;

/*    for ( i = 2*n ; i >= 0 ; i = i - 2 )
    {
        printf( "%d\n" , i ) ;
    }
*/
/*   while ( i >= 0 )
    {
        printf("%d\n", i) ;
        i = i - 2 ;
    }
*/

    do 
    {
        printf("%d\n", i) ;
        i = i - 2 ;
    }
    while ( i >= 0 ) ;

/*
    for ( x = 2*n , y = 0 ; x >= 0 ; x  = x - 2 )
    {
        S = x + y ;
        y = S ;
    }
*/
    x = 2*n ;
    y = 0 ;
 
/*    while ( x >= 0 )

    {
        S = x + y ;
        x = x - 2 ;
        y = S ;
    }
*/
    do 
    {
        S = x + y ;
        x = x - 2 ;
        y = S ;
    }
    while ( x >= 0  ) ;
    
    printf("The Sum is %d\n" , y ) ;
    
    return 0; 
}