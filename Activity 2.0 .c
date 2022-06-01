#include<stdio.h>
int main()
{
    int sub1,b=1,sum=0, limit=5;

    printf("Enter Five Graded Subjects:\n");

   for(int i =1 ;i<=limit;i++)
   {
       printf("subject %d:",b++);
       scanf("%d",&sub1);
       sum+=sub1;
   }

   average(sum,limit);

    return 0;
   }

   void average(int a,int b)

   {
    int avrg;
    avrg=a/b;
    printf("Average:%d",avrg);

   }