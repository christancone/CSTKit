#include <stdio.h>
int loopback4;

int books(){

 int sub;
 int i,j;

while(sub!=9999){

 printf("ENTER 1 TO GET COMPUTER SCIENCE REFERENCE BOOKS\n");
 printf("ENTER 2 TO GET NETWORKS RELATED MATERIALS \n");
 printf("ENTER 3 TO GET STRUCTURE PROGRAMMING RELATED REFERENCES \n");
 printf("ENTER 4 TO GET WEB PROGRAMMING REFERENCES\n");
 printf("ENTER 5 TO GET SRILANKAN LAW & UK LAW BOOKS\n");

 printf("ENTER 6 TO GET \"ETHICS\" REVISION MODEL PAPERS \n");
 printf("ENTER 7 TO GET ENGLISH GRAMMER EXERCISES\n");
 printf("ENTER 8 TO GET ESSENTIAL MATHEMATICS THEORITICAL & EXERCISE BOOKS\n");
 printf("ENTER 9 TO GET SINHALA LANGUAGE \n\n");
 printf("99 - go back");
 printf("\n\n");

 for(i=1;i<=30;i++){


        printf("**");
    }


 printf("\nENTER A NUMBER:\n");
 scanf("%d",&sub);
 printf("\n\n\n");




 switch(sub){

 case 1:
     printf("Dictionary of Computer Science\nCambridgeIGCES\nComputer Science Principles\n");
     printf("\n\n");
     break;


 case 2:
     printf("Computer Networking Begginers\nData communication and Computer Networks\nCompTIA Networks\n");
    printf("\n\n");
    break;


case 3:
    printf("DATA Structure Programming\nProgramming Approach\nC Programming\n");
    printf("\n\n");
    break;

case 4:
    printf("ELOQUENT Javascript\nPHP and  MYSQL\nLearning Web Designing\n");
    printf("\n\n");
    break;


case 5:
     printf("LANKAN LAW\nUK law\npolitical constitutions");
    printf("\n\n");
    break;


case 6:
    printf("Common ethics \nCultures and Traditions\nReligious view\n");
    printf("\n\n");
    break;



case 7:
    printf("UK grammer\nUSA English\nExercises\n");
    printf("\n\n");
    break;




case 8:
    printf("Quick Calculation\nXtra maths\nBetter maths\n");
    printf("\n\n");
    break;




case 9:
    printf("Snhala for begginers\nkriyakarakama1,2,3\n");
    printf("\n\n");
    break;



case 99:
    loopback4=1; goto bottom4;
    break;


 default:
    printf("NO MATCHES, GO THROUGH THE CONTENT AGAIN");

    printf("\n\n");
 }


}









bottom4:



return loopback4;
}
