
#include <stdio.h>

int main ()

{

int i , j, n, N;

printf("Enter the numbers\n") ;

scanf("%d \n" , &n) ;

scanf("%d \n" , &N) ;

for ( i = 0 , j = 0 ; i<=n, j<=N  ; i = i + 5 , j = j +8)

{

printf("%d %d \n" , i , j ) ;

}


return 0 ;

}