
#include <stdio.h>
/*
int fact( int x )
{
    if ( x == 0 || x == 1 )

    return 1 ;

    else 

    return x * fact(x-1) ;

}

int main ()

{

    int x ;

    printf("Enter the number \n") ;
    scanf("%d\n" , &x ) ;

    printf("%d\n" , fact(x) ) ;



    return 0 ;
} */

int main()

{

    int i , j , f, n ;
    i = 1;
    j = 1 ;

    printf("Enter the Number\n") ;
    scanf( "%d\n" , &n ) ;

    for ( i = 1 ; i <= n ; i++ )
    {
        f = i * j ;
        j = f ;

    }

    printf("factorial is %d\n" , j ) ;

    return 0; 
}