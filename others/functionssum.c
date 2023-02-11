
#include <stdio.h>



int Sm( int a , int b )

{

return a + b ;

}

int main ()

{

int a , b , S ;

printf("Enter the numbers\n");

scanf("%d \n" , &a ) ;

scanf("%d \n" , &b ) ;

S = Sm(a,b) ;

printf("The sum is %d \n" , S) ;


return 0 ;


}