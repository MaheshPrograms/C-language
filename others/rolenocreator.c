
#include <stdio.h>

int main()

{
    int Y, D, Sr ;
    printf("Enter your year of education, divion and Sr no. in your classroom\n") ;
    scanf("%d\n", &Y ) ;
    scanf("%d\n", &D ) ;
    scanf("%d\n", &Sr ) ;

    if ( D > 9 && Sr > 9 )
    {
        printf("Your roll no. is %d%d%d", Y, D, Sr ) ;
    }

    else if ( D < 9 && Sr > 9 )
    {
        printf("Your roll no. is %d0%d%d", Y, D, Sr ) ;
    }

    else if ( D < 9 && Sr < 9 )
    {
        printf("Your roll no. is %d0%d0%d", Y, D, Sr ) ;
    }

    return 0 ;
}