#include <stdio.h>
int loopback5;
int asses(){

 int assg;
 int i,j;

while(assg != 99){


 printf("ENTER 1 FOR ENGLISH\n");
 printf("ENTER 2 FOR ETHICS & BASIS \n");
 printf("ENTER 3 FOR SINHALA \n");
 printf("ENTER 4 FOR ELECTRONICS\n");
 printf("ENTER 5 FOR INTRODUCTION TO COMPUTER SCIENCE\n");

 printf("ENTER 6 FOR ESSENTIAL MATHEMATICS \n");
 printf("ENTER 7 FOR WEB PROGRAMMING\n");
 printf("ENTER 8 FOR STRUCTURE PROGRAMMING\n");
 printf("ENTER 9 FOR COMPUTER NETWORKS\n");
 printf("\n\n");
 printf("99 - go back\n");

 for(i=1;i<=30;i++){


        printf("**");
    }


 printf("\nENTER A NUMBER:\n");
 scanf("%d",&assg);
printf("\n\n\n");



 switch(assg){

 case 1:
     printf("March02-Assigment 01-Essay writing \nTitle- Importance of English language\nOctober15- Assigment02 - Movie Review \nDecember30- Assignment 03- Presentation In prepositions\n");
     printf("\n\n");
     break;


 case 2:
     printf("April15- Assigment01- Open book examination in Sri Lankan's law\nAugust 20-Assigment02- presentation on This is how laws influence people's lives\n");
    printf("\n\n");
    break;


case 3:
    printf("March-02 Essay writing on My university-Assigmsnt01\nOctober 1- Assignment 02- Mid Examination\nSeptember 15-Assignment 03- Mid Examination 2\n");
    printf("\n\n");
    break;

case 4:
    printf("May 15-Assigment 1-Quiz 01 in Fundamentals on Electronics\nJuly 28- Assigment02-Draw structure of Electronic Circuit\nAugust-Assigment03- Quiz o2- electronic devices\nDecember 30-Assigment 04- Quiz 03 (Simple calculation quizzes 25)\n");
    printf("\n\n");
    break;


case 5:
     printf("February15-Assigment 01- Create Resume\nMay2-ExamOn Ms office packages_Assigment 02\nJun30- Quiz");
    printf("\n\n");
    break;


case 6:
     printf("March30-Quiz 01 Functions & equvations and inequalities\nMay15-Quiz 02- Trigonometry\nAugust-Quiz 03- Matrices& Vectors\nDecember 30-Quiz 04 Cartesian Coordinate System\n");
    printf("\n\n");
    break;



case 7:
    printf("May 30- Assignment 01-practical on HTML&CSS\nJune 30-Quiz 01-Assigment 02-BMI Calculater\nAugust 30- Assignment--03-Create Own Websites \nSeptember-01- presentation On own Websites\n");
    printf("\n\n");
    break;




case 8:
    printf("March15-Assigment 01-Quiz\nMay30-Mini project in Creating Mobile Application\nSeptember 30- Quiz 02\n");
    printf("\n\n");
    break;




case 9:
    printf("May 30- Quiz 1-Fundamentals of Computer Networks\nJune 1- Quiz 2- ISO OSI Reference Model\nAugust 01-Quiz 03- IP address\n");
    printf("\n\n");
    break;




case 99:
    loopback5=1; goto bottom5;
    break;

 default:
    printf("NO MATCHES, GO THROUGH THE CONTENT AGAIN");

 }

}







bottom5:






return loopback5;
}
