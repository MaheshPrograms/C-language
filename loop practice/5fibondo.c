
#include <stdio.h>

int main ()

{

int i , S, N, tn ;

i = 0 ;

printf("Enter the number and the last term \n") ;

scanf("%d \n" , &N ) ;

scanf("%d \n" , &tn ) ;

printf("%d \n" , i ) ;

printf("%d \n" , N) ;

do 

{

S = i + N ;

printf("%d \n", S ) ;

i = N ;

N = S ;


}

while ( N < tn ) ;

return 0 ;

}