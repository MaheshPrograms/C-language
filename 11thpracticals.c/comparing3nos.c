
#include <stdio.h>

float main()

{

float p, q, r ;

    printf("Enter the three numbers\n") ;
    scanf("%f\n", &p);
    scanf("%f\n", &q);
    scanf("%f\n", &r);

     
        if( p>q )

            {

                if (q>r)

                    {  printf("%f is the greatest and %f is the smallest number\n" ,p, r ) ;  }

                
                else if (p>r)

                     {  printf("%f is the greatest and %f is the smallest number\n" , p, q ) ;  }

                
                else 

                     {  printf("%f is the greatest and %f is the smallest number\n" , r, q ) ;  }

            }

        
         if ( q>p )  

            {

                if ( p>r )

                     {  printf("%f is the greatest and %f is the smallest number\n" , q, r ) ;  }


                else if (q>r)

                     {  printf("%f is the greatest and %f is the smallest number\n" , q, p ) ;  }


                else 

                     {  printf("%f is the greatest and %f is the smallest number\n" , r, p) ;  }


            }    


return 0 ;

}