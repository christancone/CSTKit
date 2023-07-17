#include<stdio.h>
int loopback3;
int stdy() {
  int number;
  printf("\t\tEffective Study Plan\n\n\n");
  printf("Helping Tips for your Studies\n\t\t* Analise your individual learning style\n\t\t*Plan your Study time for each class\n\t\t*Take notes for special points and lessons\n\t\t*Do more practicals and practice your lessons\n\t\t*Remind lessons and do revision daily\n\n\n");

  while (number != 99999) {

    printf("Select your comfortable time to study:\n\n\t1-Early in the morning\n\t2-Day time\n\t3-Evening to midnight\n");
    printf("99-Go Back");

    printf("\nEnter the Number you choose(1/2/3):");

    scanf("%d", & number);


      if (number == 1) {
        printf("Early in the Morning\n\t\t 2.00 am-4.00 am - Make a Summary\n\t\t 4.00 am - 6.00 am - Read the Summary and Study it well\n\t\t 6.00 am- 8.00 am -Do questions\n\n");
      } else if (number == 2) {
        printf("Day time\n\t\t 9.00 am-11.00 am-Remind your lesson and Practice it\n\t\t 11.00 am- 1.00 pm -Do a Revision\n\n");
      }

      else if(number==3) {
        printf("Evening to mid night\n\t\t 6.00 pm- Watch your missed recordings\n\t\t 8.30 pm-10.30 pm-Practice your Subject,Solve maths questions\n\t\t 11.00 pm- 1.00 am-Do practicals\n\n");
      }
      else if(number ==99){loopback3=1; goto bottom3;}
      else{
        printf("***********Invalid Output, Please try again*****************\n\n\n");
      }

  }
  bottom3:
  return loopback3;

}
