#include <stdio.h>

int main()

{
   
    int r , C, A ;

    printf("Enter the radius\n");
    scanf("%d\n" , &r ) ;

    C = 2 * 3.14 * r ;
    A = 3.14 * r * r ;

    printf("Circumference of circle is %d \n" , C ) ;
    printf("Area of circle is %d \n" , A ) ;


    return 0 ;

}