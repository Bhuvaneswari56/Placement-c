#include<stdio.h>
int main() {
int marks[5],i,total=0;
float average;
char grade;
printf("enter marks of 5 subjects(out of 100):\n");
for(i=0;i<5;i++) {
    printf("subject %d:",i+1);
    scanf("%d",&marks[i]);
    //Validation
    if(marks[i]<0||marks[i]>100) {
        printf("invalid mark entered! please enter marks between 0 and 100.\n");
        return 1;
    }
    total +=marks[i];

    }
    average=total/5.0;
    //Grade calculation
    if(average>=100)
        grade ='A';
    else if(average>=75)
        grade ='B';
    else if(average>=50)
        grade ='c';
    else if(average>=35)
        grade ='S';
    else
        grade ='F';

     printf("\nTotal Marks:%d\n",total);
     printf("Average:%.2f\n",average);
     printf("Grade:%c\n",grade);


     return 0;
}
