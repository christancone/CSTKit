#include<stdio.h>
#include "risna.c"
#include "christan.c"
#include "sanji.c"
#include "rifnas.c"
#include "piyumi.c"

int val1;
int main() {
    top:
  printf(" .----------------.  .----------------.  .----------------.  .-----------------. .----------------.    \n| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |   \n| |   ______     | || |   _____      | || |     _____    | || | ____  _____  | || |  ___  ____   | |   \n| |  |_   _ \\    | || |  |_   _|     | || |    |_   _|   | || ||_   \\|_   _| | || | |_  ||_  _|  | | \n| |    | |_) |   | || |    | |       | || |      | |     | || |  |   \\ | |   | || |   | |_/ /    | |  \n| |    |  __'.   | || |    | |   _   | || |      | |     | || |  | |\\ \\| |   | || |   |  __'.    | | \n| |   _| |__) |  | || |   _| |__/ |  | || |     _| |_    | || | _| |_\\   |_  | || |  _| |  \\ \\_  | |\n| |  |_______/   | || |  |________|  | || |    |_____|   | || ||_____|\\____| | || | |____||____| | |  \n| |              | || |              | || |              | || |              | || |              | |   \n| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |   \n '----------------'  '----------------'  '----------------'  '----------------'  '----------------'    \n");
  printf("\n\n");
  printf(" __      __       .__                               \n/  \\    /  \\ ____ |  |   ____  ____   _____   ____  \n\\   \\/\\/   // __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\ \n \\        /\\  ___/|  |_\\  \\__(  <_> )  Y Y  \\  ___/ \n  \\__/\\  /  \\___  >____/\\___  >____/|__|_|  /\\___  >\n       \\/       \\/          \\/            \\/     \\/ \n");

  printf("        CCCCCCCCCCCCC   SSSSSSSSSSSSSSS TTTTTTTTTTTTTTTTTTTTTTT\n     CCC::::::::::::C SS:::::::::::::::ST:::::::::::::::::::::T\n   CC:::::::::::::::CS:::::SSSSSS::::::ST:::::::::::::::::::::T\n  C:::::CCCCCCCC::::CS:::::S     SSSSSSST:::::TT:::::::TT:::::T\n C:::::C       CCCCCCS:::::S            TTTTTT  T:::::T  TTTTTT\nC:::::C              S:::::S                    T:::::T        \nC:::::C               S::::SSSS                 T:::::T        \nC:::::C                SS::::::SSSSS            T:::::T        \nC:::::C                  SSS::::::::SS          T:::::T        \nC:::::C                     SSSSSS::::S         T:::::T        \nC:::::C                          S:::::S        T:::::T        \n C:::::C       CCCCCC            S:::::S        T:::::T        \n  C:::::CCCCCCCC::::CSSSSSSS     S:::::S      TT:::::::TT      \n   CC:::::::::::::::CS::::::SSSSSS:::::S      T:::::::::T      \n     CCC::::::::::::CS:::::::::::::::SS       T:::::::::T      \n        CCCCCCCCCCCCC SSSSSSSSSSSSSSS         TTTTTTTTTTT      \n");
  printf("\n\n");
  printf("Good Day! It's your Blink made by CST for the CST. We have numerous features to offer, and checkout everything here. Happy raid......\n");
  printf("\n\n");

  printf("1- GPA Calculator\n2- Semester Calender \n3- Effective Study Method \n4 -Reference Books \n5- Works to be submitted\n\n99- Exit\n\n");
  printf("Choose the number of your preferred action to continue..: ");
  scanf("%d", & val1);
  while (val1 != 99) {
    switch (val1) {

    case 1:
      gpacalc();
      if(loopback==1){goto top;}
      break;

    case 2:
        calen();
        if(loopback2==1){goto top;}
        break;

    case 3:
        stdy();
        if(loopback3==1){goto top;}
        break;

    case 4:
      books();
      if(loopback4==1){goto top;}
      break;

    case 5:
        asses();
         if(loopback5==1){goto top;}
      break;




    }

  }

  return 0;

}
