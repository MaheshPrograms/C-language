#include <stdio.h>
int main ()

{
    int i, tn, S, x, y ;

    printf("Enter the last term \n") ;
    scanf( "%d\n" , &tn ) ;

/*    for ( i = tn ; i >= 0 ; i-- )
    {
        printf("%d\n", i ) ;
    }
*/
 /*   i = tn ;
    while ( i >= 0 )
    {
        printf("%d\n" , i ) ;
        i--;
    }
*/
   i = tn ;
    do
    {
       printf("%d\n" , i ) ;
       i-- ;
    } 
    while (i>=0); 

/*    for ( x = tn , y = 0 ; x >= 0 ;  )
    {
        S = x + y ;
        x-- ;
        y = S ;
    }
*/
    x = tn ;
    y = 0 ;
    
/*    while ( x >= 0 )
    {
        S = x + y ;
        x--;
        y = S ;
    }
*/
    do
    {
        S = x + y ;
        x-- ;
        y = S ;
    } while (x>=0);
    

    printf("Sum is %d\n" , y ) ;
    
    return 0;
}