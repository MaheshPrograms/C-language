#include <stdio.h>
int main()

{
    int C, N ;

    printf("Welcome to unit convertor\n") ;
    printf("Code for conversion from m to cm is 1\n") ;
    printf("Code for conversion from kg to g is 2\n") ;
    printf("Code for conversion from l to ml is 3\n") ;
    printf("Enter the code for conversion and amt in one unit \n") ;
    scanf("%d\n" , &C) ;
    scanf("%d\n" , &N) ;

    switch ( C )

    {
    
    case 1 :
    printf("You want to convert from m to cm \n");
    printf("Conversion is %d cm\n", 100*N ) ;
    break ;
       

    case 2 :
    printf("You want to convert from kg to g \n");
    printf("Conversion is %d cm\n", 1000*N ) ;
    break ;

    case 3 :
    printf("You want to convert from l to ml \n");
    printf("Conversion is %d cm\n", 1000*N ) ;
    break;

    default :
    printf("Incorrect code entered\n") ;

    }

    return 0 ;
}