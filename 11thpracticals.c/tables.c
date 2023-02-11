#include <stdio.h>

int main ()

/*
{

int n , i, N ;

printf("Enter the number you want multiplication table of and no.of terms \n");
scanf("%d\n", &n) ;
scanf("%d\n", &N) ;

for( i = 1 ; i <= N ; i ++  )

{

    printf("%d X %d = %d \n" , n , i , n*i ) ;

}

return 0 ;

} */

{

int n , i ;

printf("Enter the number youwant multiplication table of \n") ;
scanf("%d\n" , &n) ;

for( i = n ; i <= 10*n ; i = i + n )

{ printf("%d\n" , i) ;  }

}