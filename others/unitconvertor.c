
#include <stdio.h>

int main()

{

int C , N ;

printf("Welcome to unit convertor \n \n") ;
printf("Enter the valid number code for conversion \n") ;
printf("Code for conversion meter to centimeter is '1' \n") ;
printf("Code for conversion kilometer to meter is '2' \n") ;
printf("Code for conversion kilogram to gram is '3' \n") ;
printf("Code for conversion litre to mililitre is '4' \n \n") ;

printf("Enter the code and and amount in first unit \n") ;

scanf("%d \n" , &C) ;

scanf("%d \n" , &N) ;

switch (C)
  
  {

   case 1 :

{

printf("You want to convert meter to centimeter \n") ;

printf("Conversion is %d centimeter \n" , 100*N ) ;

break ;
}

case 2 :

{

printf("You want to convert kilometer to meter \n") ;

printf("Conversion is %d meter \n" , 1000*N) ;

break ;
}

case 3 :

{

printf("You want to convert kilogram to gram \n") ;

printf("Conversion is %d gram \n" , 1000*N ) ;

break ;

}

case 4 :

{

printf("You want to convert litre to millilitre \n") ;

printf("The conversion is %d \n mililitre" , 1000*N) ;

break ;

}


default :

{ printf("Incorrect code entry \n") ; }


}


 return 0;

}