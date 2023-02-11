
#include <stdio.h>

int main()


/*

{
  int n, S ;

  printf("Enter the number \n") ;
  scanf("%d\n", &n ) ;

  S = ((n*(n+1))/2) ;

  printf("The sum is %d \n", S) ;

  return 0 ;


}
*/

{

int i , j , S, n ;
i = 1 ;
j = 0 ;

printf("Enter the number \n") ;
scanf("%d\n", &n) ;

for ( i = 1 ; i <= n ; i ++  )

{
    
    S = i + j ;

    j = S ;

}

printf("Sum is %d \n", j ) ;

return 0 ;

}