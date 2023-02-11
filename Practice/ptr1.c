
#include <stdio.h>

int func1 ( int arr[], int n )
{
    for ( int i = 0 ; i < n ; i++ )
    {
        printf("Element %d of array is %d\n", i, arr[i] ) ;
    }
}

int func2 ( int arr[], int n )
{
    for ( int i = 0 ; i<n ; i++ )
    {
        printf("Address of element %d of array is %d\n", i , &arr[i] ) ;
    }
}

int func3( int *p , int n )
{
    for ( int i = 0 ; i<n ; i++ )
    {
        printf("Element %d of array is %d\n", i, p[i] ) ;
    }
}

int func4 ( int *p , int n )
{   
    for ( int i = 0 ; i<n ; i++ )
    {
        printf("Address of element %d of array is %d\n", (i+1) , (p+i) ) ;
    }
}

int func5 ( int *p , int n )
{   
    for ( int i = 0 ; i<n ; i++ )
    {
        printf("Value of element %d of array is %d\n", (i+1) , *(p+i) ) ;
    }
}

int main()

{
/*    
    int m = 89 ;
    int *p = &m ; 

    printf("Value of m is %d\n", m ) ;
    printf("Value of m is %d\n", *p ) ;
    printf("Address of m is %d\n", &m ) ;
    printf("Address of m is %d\n", p ) ;    */

    int n, arr[100] ;

    printf("Enter the size and elements of array\n") ;
    scanf( "%d\n", &n ) ;

    for ( int i = 0 ; i<n ; i++ )
    {
        scanf("%d\n", &arr[i] ) ;
    }

    func1( arr, n ) ;
    func2( arr, n ) ;
    func3( arr, n ) ;
    func4( arr, n ) ;
    func5( arr, n ) ;

    return 0 ;
}