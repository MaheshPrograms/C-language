#include <stdio.h>

int main()

{
    int arr[] = { 4, 5, 78, 98, 12, 32 }  ;
    int *p = &arr[0] ;

    printf("%d\n", p) ;

    for ( int i = 0 ; i<5 ; i++ )
    {
        printf( "%d \n", (p+i)) ;
    }

    return 0 ;
}