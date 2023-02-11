
#include <stdio.h>
float main ()

{
    float ISM, ESM, Assig, Beh, testmarks, Abs, PA, Attm, TTM, TCM, TM, CGPA ;

    printf("Enter the details of stds as per following sequence\n") ;
    printf("1.In Semister Exam marks\n") ;
    printf("2.End Semister exam marks\n") ;
    printf("3.Assignments submitted\n") ;
    printf("4.Behaviour marks\n") ;
    printf("5.Test marks\n") ;
    printf("6.Absent Days\n") ;

    scanf("%f \n", &ISM ) ;
    scanf("%f \n", &ESM ) ;
    scanf("%f \n", &Assig ) ;
    scanf("%f \n", &Beh ) ;
    scanf("%f \n", &testmarks ) ;
    scanf("%f \n", &Abs ) ;

    PA = ((180 - (Abs))*100)/180 ;
    printf("The percentage attendence is %f\n", PA ) ;

    if ( PA < 75 )
    {
        Attm = 0 ;
    }

    else if ( PA >= 75 && PA < 80 )
    {
        Attm = 1 ;
    }

    else if ( PA >= 80 && PA < 85 )
    {
        Attm = 2 ;
    }

    else if ( PA >= 85 && PA < 90 )
    {
        Attm = 3 ;
    }

    else if ( PA >= 90 && PA < 95 )
    {
        Attm = 4 ;
    }

    else if ( PA >= 95 && PA <= 100 )
    {
        Attm = 5 ;
    }

    TTM = ISM + ESM ;

    printf("Total theory marks are %f \n", TTM ) ;

    TCM = Assig + Beh + testmarks + Attm ;

    printf("Total class work marks are %f \n", TCM ) ;

    TM = TTM + TCM ;

    printf("Student has got %f Marks out of 125\n", TM ) ;

    CGPA = TM / 12.5 ;

    printf("The CGPA is %f \n", CGPA ) ;


    return 0 ;
}