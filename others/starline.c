#include <stdio.h>

void star ( )
{
    printf("%c", '*') ;
}

void space ( int n  )
{
    for ( int i = 0 ; i < n ; i ++)
    {
        printf("  ") ;
    }
}

int main ()

{
    int n ;

    printf ( "Enter no of stars you want\n" ) ;
    scanf("%d\n", &n) ;

    for ( int i = 0 ; i < n ; i++ )
    {
        space(i) ;
        star() ;
        printf("\n") ;
        printf("\n") ;
    }

    return 0 ;

}