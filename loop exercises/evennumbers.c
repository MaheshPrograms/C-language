#include <stdio.h>
int main()

{
    int i , n, x, y, S ;
    i = 0 ;

    printf("Enter no. of even numbers to be print\n") ;
    scanf("%d\n" , &n ) ;

/*    for ( i = 0 ; i <= 2*n ; i = i + 2  )
    {
        printf("%d\n" , i) ;
    }
*/

/*    while ( i <= 2*n )
    {
        printf("%d\n" , i) ;
        i = i + 2 ;
    }
*/
    do 
    {
        printf("%d\n" , i) ;
        i = i + 2 ;
    }

    while ( i <= 2*n ) ;

/*
    for ( x = 2, y = 0 ; x <= 2*n ; x = x + 2 )
    {
        S = x + y ;
        y = S ;
    }
*/  
/*
    x = 2 ;
    y = 0 ;
    while ( x <= 2*n )
    {
        S = x + y ;
        x = x + 2 ;
        y = S ;
    }
*/
    do
    {
        S = x + y ;
        x = x + 2 ;
        y = S ;
    } while ( x <= 2*n );
    

    printf("The Sum is %d \n" , y ) ;

    return 0 ;
}