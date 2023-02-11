
#include <stdio.h>

int main()

{
    int array[10][10] ;
    int R, C ; 

    printf("Enter no. of rows and columns in the array and enter all elements one by one horinzontly\n") ;
    scanf("%d\n", &R ) ;
    scanf("%d\n", &C ) ;

    for ( int i = 1 ; i <= R ; i++ )
    {
        for( int j = 1 ; j<=C ; j++ )
        {
            scanf("%d\n", &array[i][j] ) ;
        }
    }
    
    for ( int i = 1 ; i<=R ; i++ )
    {
        for ( int j = 1 ; j <= C ; j++ )
        {
            printf("The element at position %d , %d is %d\n", i, j, array[i][j] ) ;
        }
    }

    return 0 ;
}