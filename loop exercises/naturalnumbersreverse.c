#include <stdio.h>

int main ()

{
    int i, n, x, y, S ;

    printf("Enter no. of terms to be print\n") ;
    scanf( "%d\n" , &n ) ;

    /*
    for ( i = n ; i >= 1 ; i -- )
    {
        printf( "%d\n", i ) ;
    }
    */

   i = n ;

/*   while ( i >= 1 )
   {
       printf("%d\n", i) ;
       i-- ;
   } */

   do 
   {
       printf("%d\n", i) ;
       i -- ;
   }

   while ( i >= 1 ) ;

/*    for ( x = n , y = 0 ; x >= 1 ; x -- )
    {
        S = x + y ;
        y = S ;
    }
*/  
/*    x = n ;
    y = 0 ;
    while ( x >= 1 )
    {
        S = x + y ;
        x-- ;
        y = S ;
    }
*/
    x = n ;
    y = 0 ;
    do
    {
        S = x + y ;
        x -- ;
        y = S ;
    } while (x>=1);
    

    printf("The sum is %d\n" , y ) ;

    return 0 ;
}