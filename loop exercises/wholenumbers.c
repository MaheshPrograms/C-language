#include <stdio.h> 
int main () {
    int i , n, S, x, y ;
    i = 0 ;

    printf("Enter the number of terms to be print\n") ;
    scanf( "%d\n" , &n ) ;

/*    for ( i = 0 ; i <= (n-1) ; i++ )
    {
        printf("%d\n" , i) ;
    }
*/

/*    while ( i <= (n-1) )
    {
        printf("%d\n" , i) ;
        i++ ;
    }
*/

    do {
        printf("%d\n", i) ;
        i++ ;
    }  while (i <= (n-1));

/*    for ( x = 1 , y = 0 ; (n-1) >= x ; )
    {
        S = x + y ; 
        x++ ; 
        y = S ;
    }
*/
/*    x = 1 ;
    y = 0 ;
    while ( x <= (n-1) )
    {
        S = x + y ;
        x++;
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
    } while (x<=(n-1));
    
    
    printf("%d\n" , y) ;

    return 0 ;
}