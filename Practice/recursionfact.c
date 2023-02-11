
#include <stdio.h>


int fact (int x)
{
    if (x == 0 || x == 1 )
    {return (1) ;}

    else 
    {return (x * fact (x-1)); }
}
int main ()

{
    int n ;
    printf("Enter Number : ");
    scanf("%d\n", &n);

   

    printf("Factorial is %d\n", fact(n)) ;

    return 0 ;
}