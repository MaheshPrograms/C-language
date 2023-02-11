#include <stdio.h>

int main()

{
    int x, y, z ;
    
    printf("Enter three numbers\n") ;
    scanf("%d\n", &x ) ;
    scanf("%d\n", &y ) ;
    scanf("%d\n", &z ) ;

    if ( x>y )
    {
        if ( y>z )
        {
            printf("We have %d>%d>%d\n", x, y, z ) ;
        }

        else if ( x > z )
        {
            printf("We have %d>%d>%d\n", x, z, y  ) ;
        }

        else 
        {
            printf("We have %d>%d>%d\n", z, x, y ) ;
        }
    }

    else if ( y > x )
    {
        if ( x > z )
        {
            printf("We have %d>%d>%d\n", y, x, z ) ;
        }

        else if ( y > z )
        {
            printf("We have %d>%d>%d\n", y, z, x );
        }

        else
        {
            printf("We have %d>%d>%d\n", z, y, x ) ;
        }
    }

    else 
    {
        printf("Equal numbers entered\n") ;
    }
    
    return 0 ;
}