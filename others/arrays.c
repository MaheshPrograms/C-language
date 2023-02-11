
#include <stdio.h>

float main ()

{

float marks[5] ;

    marks[1] = 80 ;
    marks[2] = 82 ;
    marks[3] = 89 ;
    marks[4] = 90 ;
    marks[5] = 92 ;

    for (int i = 1 ; i<=5 ; i++ )
        { printf("marks of student %d are %f \n", i ,marks[i] ) ; }

 return 0 ;

}