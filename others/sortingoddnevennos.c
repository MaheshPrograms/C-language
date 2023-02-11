#include <stdio.h>
int main ()

{

    int array[50], n, C ;

    printf("Enter the no of elements to be entered and enter all elements\n") ;
    printf("Also enter the proper code \n") ;
    printf("Code for sorting even numbers is 1 \n") ;
    printf("Code for sorting odd numbers is 2 \n") ;

    scanf("%d\n", &n ) ;

    for ( int i = 0 ; i <= (n-1) ; i++ )
    {
        scanf("%d\n", &array[i] ) ;
    }

    scanf("%d\n", &C ) ;

    switch ( C )
    {
        case 1 :
        {
            for ( int i = 0 ; i <= (n-1) ; i++  )
            {
                int y = array[i] ;
            
                if ( y%2 == 0 ) 
                {
                    printf("%d\n", y ) ;
                }
            }
            break ;
        }

        case 2 :
        {
            for ( int i = 0 ; i <= (n-1) ; i++  )
            {
                int y = array[i] ;
            
                if ( y%2 == 1 ) 
                {
                    printf("%d\n", y ) ;
                }
            }
        }

    }

    return 0 ;
}