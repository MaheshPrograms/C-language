#include <stdio.h>
int main ()

{
    int i, j, S, tn ;
    i = 0 ;
    j = 1 ;

    printf("Enter limiting term\n") ;
    scanf( "%d\n", &tn ) ;

    printf("%d\n",i) ;
    printf("%d\n",j) ;

    for (i = 0 ; j < tn ; )
    {
        S = i + j ;
        printf("%d\n" , S ) ;
        i = j ;
        j = S ;
    }

    return 0;

}