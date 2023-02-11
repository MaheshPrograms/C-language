#include <stdio.h>
int main ()

{
    int i, n, x, y, S ;
    i = 1 ;

    printf("Enter no. of terms to be print\n");
    scanf("%d\n", &n) ;

/*   for ( i = 1 ; i <= ( 2*n - 1 ) ; i = i + 2 )
    {
        printf ("%d\n" , i ) ;
    }
*/
/*    while ( i <= ( 2*n - 1 ) )
    {
        printf("%d\n", i ) ;
        i = i + 2 ;
    }
*/
    do 
    {
        printf("%d\n", i) ;
        i = i + 2 ;
    }
    while ( i <= (2*n - 1) ) ;

/*    for ( x = 1 , y = 0 ; x <= (2*n - 1) ; x = x + 2 )
    {
        S = x + y ;
        y = S ;
    }
*/
 /*   x = 1 ;
    y = 0 ;
    while ( x <= (2*n - 1) )
    {
        S = x + y ;
        x = x + 2 ;
        y = S ;
    }
*/
    x = 1 ;
    y = 0 ;
    do 
    {
        S = x + y ;
        x = x + 2 ;
        y = S ;
    }
    while ( x <= ( 2*n - 1 ) ) ;
    
    printf("The sum is %d\n" , y) ;

    return 0 ;
}