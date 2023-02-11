#include <stdio.h>



   /* int i, j, M, tn ;
    i = 1 ;
    j = 2 ;

    printf("Enter the limiting term\n") ;
    scanf(" %d\n", &tn ) ;

    printf("%d\n%d\n", i , j ) ;

    do

    {
        M = i * j ;
        printf("%d\n", M) ;
        i = j ;
        j = M ;

    } 
    
    while (j<tn); */

    int fact ( int n )
    {
        if ( n == 1 )
        { return 1 ; }

        else if ( n == 2 ) 
        { return 2 ; }

        else 
        { return fact(n-1) * fact (n-2) ; }
    }
     
    int main()

{
    int n, i ;

        printf("Enter No. of terms to be print\n");
        scanf("%d\n" , &n) ;

        for ( i = 1 ; i<=n ; i++ ) 
        {
           printf( "%d\n" , fact(i) );
        }

    return 0 ;
}
