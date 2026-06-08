#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int totalMarks,mathematics,science,english;
float averageMarks;
char grade,pass,fail;
    printf("Student Grade Analyzer\n");
    printf("----------------------\n");
    printf("Enter Mathematics Marks:");
    scanf("%d",&mathematics);

    printf("Enter science Marks:");
    scanf("%d",&science);

    printf("Enter english Marks:");
    scanf("%d",&english);

    totalMarks=mathematics+science+english;
    averageMarks=(mathematics+science+english)/3.0;

    printf("Total:%d\n",totalMarks);
    printf("Average:%.2f\n",averageMarks);

    if (averageMarks>=80) {
        printf("Grade:A");
    }
      else if (averageMarks>=70){

    printf("Grade:B\n");
    }

     else if (averageMarks>=60){

    printf("Grade:C\n");
    }
     else if (averageMarks>=50){

    printf("Grade:D\n");
    }
     else if (averageMarks<50){

    printf("Grade:F\n");
    }


   if (mathematics<40){
    printf("Result:FAIL");
   }
   else if (science<40){
    printf("Result:FAIL");
   }
    else if (english<40){
    printf("Result:FAIL");
   }

if (mathematics>=40&&science>=40&&english>=40){
    printf("Result:PASS");
}
    return 0;
}
