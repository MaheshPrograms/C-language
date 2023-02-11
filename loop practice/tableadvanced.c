
#include <stdio.h>

int main()

{
    int n, N ;
    int S, j = 0 ;

    
    printf("Enter the no. you want table of and length of table\n") ;
    scanf("%d\n", &n );
    scanf("%d\n", &N );

    for ( int i = 1 ; i<=N ; i++ )
    {
        printf("%d X %d = %d \n" , n, i , i*n ) ;
    }

    for ( int i = 1 ; i<=n ; i++ )
    {
        int p = i*n ;
        
        S = p + j ; 
        j = S ;
    }

    printf("The sum is %d\n", j ) ;

    return 0 ;
}