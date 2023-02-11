#include <stdio.h>

void star ( int n )
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        printf("%c  " , '*') ;
    }
}

int main ()

{
    int r, c ;

    printf("Enter no. of rows and colums to be print\n") ;
    scanf("%d\n", &r ) ;
    scanf("%d\n", &c ) ;
    
    for ( int i = 1 ; i <= c ; i++ )
    {
        star (r) ;
        printf("\n") ;
    }

    return 0 ;
}