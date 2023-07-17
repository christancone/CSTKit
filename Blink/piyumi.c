#include <stdio.h>
#include <stdlib.h>

int loopback2;
int calen(){



    int number;
    int first,noofdays,i;
    printf("\t\t----*Special Event Calender*---- \n\n\n");

  while (number != 99999) {

    printf("\n+++ Select Month +++\n  \n   1-September\n   2-October\n   3-November\n   4-December\n   5-January\n   6-February\n");
    printf("   99-Go Back\n");

    printf("\nEnter the Number you choose(1/2/3/4/5/6):-");

    scanf("%d", &number);
    printf("\n \n");

      if (number == 1) {

     printf("--September 2022--\n\n");
     printf(" Su Mo Tu We Th Fr Sa\n");
       noofdays=30;first=5;

            for(i=1;i<first;i++)
            printf("   ");
            for(i=1;i<=noofdays;i++){
            printf("%3d",i);
            if((first+i-1)%7==0)
            printf("\n\n");
   }
            printf("\n\n");
            printf(".10 Sep : Binara Full Moon Poya Day\n.19 Sep : National Day of Mourning\n\n\n");
      }
       else if (number == 2) {

           printf("--October 2022--\n\n");
          printf(" Su Mo Tu We Th Fr Sa\n");
           noofdays=31;first=7;

             for(i=1;i<first;i++)
            printf("   ");
            for(i=1;i<=noofdays;i++){
            printf("%3d",i);
            if((first+i-1)%7==0)
            printf("\n\n");
           }
            printf("\n\n");
            printf(".9 Oct : Milad-Un-Nabi (Holy Prophet's Birthday)\t& Vap Full Moon Poya Day\n.10 Oct : Special Bank Holiday\n*.24 Oct : Deepavali\n\n\n");
      }

      else if(number==3) {
           printf("--November 2022--\n\n");
           printf(" Su Mo Tu We Th Fr Sa\n");
           noofdays=30;first=3;

             for(i=1;i<first;i++)
            printf("   ");
            for(i=1;i<=noofdays;i++){
            printf("%3d",i);
            if((first+i-1)%7==0)
            printf("\n\n");
           }
            printf("\n\n");
            printf("*.7 Nov : Ill Full Moon Poya Day\n\n\n");
      }
      else if (number == 4) {
           printf("--December 2022--\n\n");
           printf(" Su Mo Tu We Th Fr Sa\n");
           noofdays=31;first=5;

             for(i=1;i<first;i++)
            printf("   ");
            for(i=1;i<=noofdays;i++){
            printf("%3d",i);
            if((first+i-1)%7==0)
            printf("\n\n");

           }
           printf("\n\n");
           printf(".7 Dec : Unduvap Full Moon Poya Day \n.25 Dec : Christmas Day \n*.26 Dec : Special Bank Holiday\n\n\n");
      }
      else if (number == 5) {

           printf("--January 2023--\n\n");
           printf(" Su Mo Tu We Th Fr Sa\n");
           noofdays=31;first=0;

             for(i=1;i<first;i++)
            printf("   ");
            for(i=1;i<=noofdays;i++){
            printf("%3d",i);
            if((first+i-1)%7==0)
            printf("\n\n");
            }

           printf("\n\n");
           printf(".6 Jan : Duruthu Full Moon Poya Day \n.15 Jan : Tamil Thai Pongal Day \n*.16 Jan : Special Bank Holiday\n\n\n");
      }
      else if (number == 6) {

           printf("--February 2023--\n");
           printf("\t\t(Exam month)\n\n");
           printf(" Su Mo Tu We Th Fr Sa\n");
           noofdays=28;first=4;

             for(i=1;i<first;i++)
            printf("   ");
            for(i=1;i<=noofdays;i++){
            printf("%3d",i);
            if((first+i-1)%7==0)
            printf("\n\n");
           }
            printf("\n\n");
            printf(".4 Feb	National Day \n.5 Feb : Navam Full Moon Poya Day \n*.18 Feb : Mahasivarathri Day\n\n\n");
      }
      else if(number ==99){loopback2=1; goto bottom2;}

      else{
        printf("\t\t\t***** Invalid Output, Please try again *******\n\n\n");
      }

  }

bottom2:

return loopback2;


}
