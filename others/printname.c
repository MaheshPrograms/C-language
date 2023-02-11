#include <stdio.h>

char printname ( char arr[] )
{
    int i = 0 ;
    while ( arr[i] |= '\0' )
    {
        printf( "%c", arr[i] ) ;
        i++ ;
    }
}


int main()

{
    char name[100]  ;
    int n ;
    printf("Enter no. of letters and the name  \n") ;
    scanf("%d\n", &n ) ;    
    for ( int i = 0 ; i<n ; i++ )
    {
        scanf("%c", &name[i] ) ;
    }
    name[n] = '\0' ;

    printname(name) ;

    
    return 0 ;
}