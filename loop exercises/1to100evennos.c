#include <stdio.h>
int main()

{
    int i, C ;

    printf("Enter the appropriate code for sequence\n") ;
    printf("Code for conventional sequence is 1 \n") ;
    printf("Code for Reverse sequence is 2 \n") ;

    scanf( "%d\n", &C ) ;

    switch (C)  

    {
        case 1 :
        {
            for ( int i = 2 ; i <= 100 ; i = i + 2 )
            {
                printf("%d\n" , i) ;
            }
        }

        case 2 :
        {
            for ( i = 100 ; i >= 1 ; i = i - 2 )
            {
                printf("%d\n" , i ) ;
            }
        }

        default :
        {
            printf("Invalid Code entered\n") ;
        }
    }

    return 0 ;

}