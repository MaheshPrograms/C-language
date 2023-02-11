
#include <stdio.h>

float main ()

{

float l , m , n ;

    printf("Enter three numbers\n") ;
    scanf("%f\n" , &l) ;
    scanf("%f\n" , &m) ;
    scanf("%f\n" , &n) ;

        if (l>m )

            {
                if(m>n)
                    {printf("%f is the greatest and %f is the smallest number \n" , l , n);}

                else if(l>n)
                    {printf("%f is the greatest and %f is the smallest number \n" , l , m);}

                else
                     {printf("%f is the greatest and %f is the smallest number \n" , n, m);}

            }

        
        else if (m>l)

            {

                if (l>n)
                    {printf("%f is the greatest and %f is the smallest number\n", m , n) ; }

                else if (m>n)
                     {printf("%f is the greatest and %f is the smallest number\n", m , l) ; }

                else 
                    {printf("%f is the greatest and %f is the smallest number\n", n , l) ; }
     
             }

        
        else 

            printf("Invalide entry\n") ;


return 0;

}