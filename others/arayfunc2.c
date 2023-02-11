
#include <stdio.h>

int f ( int arr[] ) 
{
    for ( int i = 0 ; i<5 ; i++ )
    {
        printf("%d\n", arr[i] ) ;
    }

    arr[2] = 89 ;

    return 0;
}


int main()

{

    int array[] = { 5, 45, 12 , 32, 1 } ;

    f( array ) ;

    printf("%d\n", array[2]) ;
    
    return 0 ;
}