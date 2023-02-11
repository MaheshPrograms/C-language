
#include <stdio.h>

void printstar(int n) {

    for ( int i = 1 ; i <= n ; i++  ) {
        printf("%c " , '*') ;
    }
    printf("\n");
}

int main () {

    int  i, N, y ;

    printf("Enter the number of rows \n") ;
    scanf("%d\n", &N) ;

    for ( i = 1 ; i <= N ; i++ ) {
        printstar (i) ;
    }
    return 0 ;
}