
#include <stdio.h>

void printstar ( int n )
{
    for ( int i = 1 ; i<=n ; i++ )
    {
        printf(" %c ", '*') ;
    }
}

int main()

{
    int n ;
    printf("Enter the number\n") ;
    scanf("%d\n", &n ) ;

    for ( int i = 1; i<=n ; i++ )
    {
        printstar(i*i) ;
        printf("\n") ;
        
    }
    
    return 0 ;
}