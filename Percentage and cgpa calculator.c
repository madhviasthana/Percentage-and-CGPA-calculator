#include <stdio.h>
#include <stdlib.h>
#include<conio.h>s

int main()
{   int num;
	float e,m,ss,s,h,total;
   printf("welcome!!! \n\n Press [1] if you are in class between 1st to 10th \n\n Press [2] if you are in class 11th or 12th \n\n");
   scanf("%d",&num);
   if(num==1)
{
	 printf("Enter your marks in english \n \n Enter your marks in Maths \n\n Enter your marks in social science  \n\n Enter your marks in science  \n\n Enter your marks in hindi  \n\n  ");
     scanf("%f %f %f %f %f",&e,&m,&ss,&s,&h);
     total = (e+m+ss+s+h)/5;
     printf("The percentage in all the five subject is %f \n\n",total);
     printf("Your CGPA is %f \n \n",total/9.5);
     }
     if(num==2)
{
	printf("ENTER YOUR STREAM!!!! \n\n [1] For commerce stream \n\n [2] For Science stream \n\n [3] For Bilogy Stream \n\n ") ;
	scanf("%d",&num);
	if(num==1)
{
	printf("ENTER YOUR MARKS!!!!\n[1] accounts\n\n [2] Business\n\n [3] Economics\n\n [4] English\n\n [5] Optional subject\n\n");
	 scanf("%f %f %f %f %f",&e,&m,&ss,&s,&h);
	      total = (e+m+ss+s+h)/5;
     printf("The percentage in all the five subject is %f \n\n",total);
     printf("Your CGPA is %f \n \n",total/9.5);
}
   if(num==2)
{
	printf("ENTER YOUR MARKS!!!!\n[1] English\n\n [2] physics\n\n [3] maths\n\n [4] chemistry\n\n [5] Optional subject\n\n");
	scanf("%f %f %f %f %f",&e,&m,&ss,&s,&h);
	total = (e+m+ss+s+h)/5;
     printf("The percentage in all the five subject is %f \n\n",total);
     printf("Your CGPA is %f \n \n",total/9.5);
   }
   if(num==3)
{
	printf("ENTER YOUR MARKS!!!!\n[1] English\n\n[2] physics\n\n[3]  biology\n\n[4] chemistry\n\n[5] Optional subject\n\n");
	scanf("%f %f %f %f %f",&e,&m,&ss,&s,&h);
	total = (e+m+ss+s+h)/5;
     printf("The percentage in all the five subject is %f \n\n",total);
     printf("Your CGPA is %f \n \n",total/9.5);





   }

}
getch();
return 0;
}
