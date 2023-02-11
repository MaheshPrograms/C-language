#include <stdio.h>

int pointer( int arr[], int n )

{
    
    int *p = &arr[0] ;

    for ( int i = 0 ; i<n ; i++ )
    {
        printf("%d\n", (p+i) ) ;
    }

}

int main()

{
    int arr[100] , n ;

    printf("Enter the length and elements of array\n") ;
    scanf("%d\n", &n ) ;

    for ( int i = 0 ; i<n ; i++ )
    {
        scanf( "%d\n", &arr[i] ) ;
    }

    for ( int i = 0 ; i < n ; i++ )
    {
        printf( "%d\n", arr[i] ) ;
    }

    pointer(arr, n ) ;

    return 0 ;
}