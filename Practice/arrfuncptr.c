
#include <stdio.h>

int func1 ( int arr[], int n )
{
    printf("Elements entered in array are as follows\n") ;
    for( int i = 0 ; i<n ; i++ )
    {
        printf("%d\n", arr[i] ) ;
    }
    
    printf("\n") ;
}


int func2( int arr[], int n )
{
    printf("Pointers of elements in array are as follows\n") ;
    int *p = &arr[0] ;
    for ( int i = 0 ; i<n ; i++ )
    {
        printf("%d\n", (p+i) ) ;
    }
    printf("\n") ;
}


int func3( int *p , int n )
{
    printf("Elements of array are as follows\n") ;
    for( int i = 0 ; i < n ; i++ )
    {
        printf("%d\n", p[i] ) ;
    }
    printf("\n") ;
}


int func4( int *p , int n )
{
    printf("Elements of array are as follows\n") ;
    for( int i = 0 ; i < n ; i++ )
    {
        printf("%d\n", *(p+i) ) ;
    }
    printf("\n") ;
}


int main()

{
    int arr[100] , n ;

    printf("Enter the length of array to be entered and elements of array\n") ;
    scanf("%d\n", &n ) ;

    for ( int i = 0 ; i<n ; i++ )
    {
        scanf("%d\n", &arr[i] ) ;
    }

    func1( arr , n ) ;
    func2( arr , n ) ;
    func3( arr , n ) ;
    func4( arr , n ) ;
    
    return 0 ;
}