
#include <stdio.h> 

float sum( float m, float n ) 
    {

        return m + n ;

    }

float sub( float m , float n )

    {

        return m - n ;

    }


float mult( float m , float n )

    {

        return m*n ;

    }

float div( float m , float n )

    {

        return m / n ;

    }

float main()

{

float x , y ;

    printf("Enter two numbers \n") ;
    scanf("%f\n", &x);
    scanf("%f\n", &y);


        printf("The sum is %f \n", sum(x,y)) ;
        printf("The substraction is %f \n", sub(x,y)) ;
        printf("The multiplication is %f \n", mult(x,y));
        printf("The division is %f \n", div(x,y)) ;

return 0 ;

}