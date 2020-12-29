/*** Calculate Student Grade  ****

****    www.tutorial4us.com   ****/


#include<stdio.h>
#include<conio.h>

void main()
{
int no, i;
float marks[10], per=0, total=0;
clrscr();
printf("Enter number of subject: ");
scanf("%d",&no);
printf("Enter marks of %d subject: ",no);
for(i=0; i<no; i++)
{
scanf("%f",&marks[i]);
}
for(i=0; i<no; i++)
{
total=total+marks[i];
}
per=total/no;
printf("Percentage: %f %",per);
getch();
}