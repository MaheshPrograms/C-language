#include <stdio.h>
int main ()

{
    int i, n, p, S, x, y ;
    printf("Enter the no. of terms to be print\n");
    scanf("%d\n" , &n) ;
    p = 2*n - 1;

/*    for ( i = p ; i >= 1 ; i = i - 2 )
    {
        printf("%d\n" , i) ;
    }
*/
/*    i = p ;
    while ( i >= 1 )
    {
        printf("%d\n" , i) ;
        i = i - 2 ;
    }
*/
    i = p ;
    do 
    {
        printf("%d\n" , i ) ;
        i = i - 2 ;
    }
    while ( i >= 1 ) ;

/*    for ( x = p , y = 0 ; x >= 1 ; )
    {
        S = x + y ;
        x = x - 2 ;
        y = S;
    }
*/

/*    x = p ;
    y = 0 ;
    while (x>=1)
    {
       S = x + y ;
       x = x - 2 ;
       y  = S ;
    }
*/  
    x = p ;
    y = 0 ;
    do
    {
        S = x + y ;
        x = x - 2 ;
        y = S ;
    } while (x >=1);
    
    printf("The sum is %d\n" , y ) ;

    return 0 ;
}