#include <stdio.h>

void printstar ( int n )
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        printf(" %c " , '*') ;
    }
}

int main ()

{
    int i, n, C ;

    printf("Enter code and the no. of rows to be print \n") ;
    scanf("%d \n", &C ) ;
    scanf("%d \n", &n ) ;

    switch (C)

    {

    case 1:
         for ( i = 1 ; i <= n ; i++ )
        {
            printstar(i) ;
            printf("\n") ;
        }
        break;

    case 2:
         for ( i = n ; i >= 1  ; i-- )
        {
            printstar(i) ;
            printf("\n") ;
        }
        break;

    default:
    printf("Invalid code\n") ;
        break;

    }

    return 0 ;
}