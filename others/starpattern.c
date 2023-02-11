
#include <stdio.h>

void printstar ( int n ) 
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        printf( " %c " , '*' ) ;
    }
     printf("\n") ;
}


int main()

{
    int n, C ;

    printf("Code for vertical pattern is 1 and for invertd patten is 2 \n") ;
    printf("Enter the no. rows of stars to be print and code for pattern\n") ;
    scanf("%d\n" , &n ) ;
    scanf("%d\n" , &C ) ;

    switch ( C )

    {
        case 1 :
        {
           { for ( int i = 1 ; i <= n ; i++ )
             {printstar (i);}
           }

           break ;
        }

        case 2 :
        {
            {for ( int i = n  ; i >= 1 ; i = i - 1)
                {printstar(i) ;}
            }
            break ;
        }
    }

    return 0 ;
}