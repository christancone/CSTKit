#include <stdio.h>
#include "blink.c"

char sub_list[][255] = {
  "CST 102-2 Introduction to Computer Science",
  "CST 101-2 Fundamentals of Electronics",
  "CST 121-3 Structured Programming",
  "ESD 121-2 English Language Level -l",
  "CST 122-2 Web Programming",
  "CST 131-2 Fundamentals of Computer Network",
  "BGE 121-2 Ethics and Law Basics"
};



float mark;
float mark_list[7];
float sum;
float average;
int empty_elements;
float gpa;
int gradeNo;
int loopback;
FILE* fileptr;

int gpacalc() {


    while(mark!=999999){

  printf("\n\nEnter the marks for following modules out of 100....\n\n999-go back\n\n\n");
  for (int i = 0; i <= 6; i++) {

    printf("%s: \n", sub_list[i]);
    scanf("%f", &mark);
    if(mark ==999){loopback =1;goto bottom;}


    mark_list[i] = mark;
    sum = sum + mark;

  }
  int j;
  int k = -1;
  while (j <= 6) {
    j++;
    k++;
    if (mark_list[k] == 0) {
      empty_elements++;

    }

  }
  average = sum / (7 - empty_elements);

  printf("Your Average Score is: %f\n", average);

  if (average > 90) {
    gpa = 4;
    gradeNo=1;
    printf("Your Grade is A+\n");
  }
  if (average >= 85 && average < 90) {
    gpa = 4;
    gradeNo=2;
    printf("Your Grade is A\n");
  }
  if (average >= 80 && average < 85) {
    gpa = 3.7;
    gradeNo=3;
    printf("Your Grade is A-\n");

  }
  if (average >= 75 && average < 80) {
    gpa = 3.3;
    gradeNo=4;
    printf("Your Grade is B+\n");
  }
  if (average >= 70 && average < 75) {
    gpa = 3.0;
    gradeNo=5;
    printf("Your Grade is B\n");
  }
  if (average >= 65 && average < 70) {
    gpa = 2.7;
    gradeNo=6;
    printf("Your Grade is B-\n");

  }
  if (average >= 60 && average < 65) {
    gpa = 2.3;
    gradeNo=7;
    printf("Your Grade is C+\n");
  }
  if (average >= 55 && average < 60) {
    gpa = 2.0;
    gradeNo=8;
    printf("Your Grade is C\n");
  }
  if (average >= 50 && average < 55) {
    gpa = 1.7;
    gradeNo=9;
    printf("Your Grade is C-\n");
  }
  if (average >= 45 && average < 50) {
    gpa = 1.3;
    gradeNo=10;
    printf("Your Grade is D+\n");
  }
  if (average >= 40 && average < 45) {
    gpa = 1;
    gradeNo=11;
    printf("Your Grade is D\n");
  }
  if (average < 40) {
    gpa = 0;
    gradeNo=12;
    printf("Your Grade is E\n");
  }
  printf("Your Average GPA is %f \n", gpa);

fileptr = fopen("list.txt","a");
    fputs("Recent log from the GPA Calculator \n",fileptr);
  fprintf(fileptr, "\tAverage %f\n",average);
  fprintf(fileptr, "\tGPA %f\n",gpa);
    }
bottom:


  return loopback;
}
