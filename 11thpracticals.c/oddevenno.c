
#include <stdio.h>

int identifier( int x )

{

    return x % 2 ;

}


float main()

{
    int x ;
    
        printf("Enter the number\n") ;
        scanf("%d\n" , &x) ;

            if ( identifier(x) == 0  )

                {printf("Number is even\n") ; }

            else

                { printf("Number is odd\n") ; }

    return 0 ;
}