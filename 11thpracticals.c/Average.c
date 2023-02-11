
#include <stdio.h>

float avg( float x, float y, float z ) 
    { return ((x+y+z)/3);  }

float main ()

{

float x, y, z ;

    printf("Enter three numbers\n" );
    scanf("%f\n",&x);
    scanf("%f\n",&y);
    scanf("%f\n",&z);

    printf("The average is %f\n", avg(x,y,z));

return 0 ;

}