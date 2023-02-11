#include <stdio.h>

int func ( int *ptr)
{
    for ( int i = 0 ; i < 5 ; i++ )
    {
        printf("%d\n", (ptr+i) ) ;
    }
    *(ptr+2) = 890 ;
    return 0 ;
}

int main()

{
    int arr[] = { 4, 5, 65, 78, 34 } ;

    func ( arr ) ;

    printf("%d\n" , arr[2]) ;
    
    return 0 ;
}