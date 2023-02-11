#include <stdio.h>

int main()

{
/*    
    int x = 98 ; 
    int *p = &x ;
    printf("Value of x is %d \n", x ) ;
    printf("Value of x is %d \n", *p ) ;
    printf("address of x is %d \n", p+1 ) ;
    printf("address of x is %d \n", &x ) ;    */


    int arr[50], n ;

    printf("Enter no. of elements you are going to enter and enter all elements\n") ;
    scanf("%d\n", &n ) ;

    for ( int i = 0 ; i <= n ; i++ )
    {
        scanf("%d\n", &arr[i] ) ;
    }

    int *p = &arr[0] ;

    for ( int i = 0 ; i < n ; i++ )
    {
        printf("Address of element %d is %d \n", arr[i], p ) ;
        p++;
    }


    return 0 ;
}