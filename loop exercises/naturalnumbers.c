#include <stdio.h>

int main()

{
    int i, n, x, y, S ;
    i = 1 ;

    printf("Enter no. of terms to be print\n") ;
    scanf("%d\n", &n) ;

/*    for ( i = 1 ; i <= n ; i++ )
    {
        printf("%d\n", i) ;
    } */

    

 /*   while ( i <= n )
    {
       printf( "%d\n", i ) ;
       i++ ;
    } */

    do
    {
       printf( "%d\n" , i ) ;
       i++ ;
    } 
    
    while ( i<=n );

/*    for ( x = 1 , y = 0 ; x <= n ; x++ )
    {
        S = x + y ;
        y = S ;
    }
*/
/*    x  = 1 ;
    y =  0 ;
    while ( x <= n )
    {
        S = x + y ;
        x++ ;
        y = S ;
    }
*/
    x = 1 ;
    y = 0 ;
    do 
    {
        S = x + y ;
        x++ ;
        y = S ;
    }
    while ( x <= n ) ;
    
    printf("The sum is %d\n", y ) ;
    

    return 0 ;
}