
#include <stdio.h>

int main ()

{

int i , S, j, tn ;

i = 0 ;

j = 1 ;

printf("Enter last term to be displayed \n") ;

scanf("%d \n", &tn);

printf("%d \n" , i) ;

do 

{

S = i + j ;

printf("%d \n" , S ) ;

i = j ;

j = S ;

}

while ( S< tn) ;

return 0 ;

}