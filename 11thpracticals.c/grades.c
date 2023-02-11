
#include <stdio.h>

float main ()

{
  
  float marks ;

    printf("Enter the marks\n") ;
    scanf( "%f\n", &marks ) ;

        if (  marks >= 75 )

            { printf("Distinction\n") ;  }


        else if (  60 < marks && marks < 75 )

            { printf("Merit\n") ; }


        else if ( marks>=35 && marks<=60 ) 

            {  printf("Pass\n") ; }

            
        else 

            { printf("Fail\n") ; }
        

  return 0 ;
}