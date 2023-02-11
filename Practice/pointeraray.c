
#include <stdio.h>

int func1 ( int *p, int n )
{
    for ( int i = 0 ; i < n ; i++ )
    {
        printf( "%d\n", p[i] ) ;
    }

    p[3] = 1296 ;
}

int func2 ( int *p, int n )
{
    for ( int i = 0 ; i < n ; i++ )
    {
        printf( "%d\n", (p + i) )  ;
    }
}

int func3 ( int *p, int n )
{
    for ( int i = 0 ; i < n ; i++ )
    {
        printf( "%d\n", *(p + i) ) ;
    }
}

int main()

{
    int arr[] = { 65, 76, 88, 12, 54 };
    int n = 5 ;

    func1(arr, n) ;
    func2(arr, n) ;
    func3(arr, n) ;
    
    return 0 ;
}