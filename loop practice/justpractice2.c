
#include <stdio.h>

int main()

{

int i=0 , n , N;

printf("Enter number and number of terms\n") ;

scanf("%d \n", &n) ;

scanf("%d \n", &N) ;

while (  i <= n*(N-1) )

{

printf("%d \n", i) ;

i++ ;

}

return 0 ;

}