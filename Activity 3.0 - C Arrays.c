
#include <stdio.h>
int main()
{ int array[1000];
  int a,i,num=1,sum=0;

printf("Enter the limit of Array: ");
 scanf("%d",&a);

 if(a>=5 && a<=10)
    {
 for(i=1;i<=a;i++)
    { printf("Enter the Element [%d]: ",num++);
      scanf("%d",&array[i]);
      sum+=array[i];

    }
        printf("Sum of all array elements = %d",sum);
    }

 else
 {
     printf("Array size limit is 5 to 10 only");
 }


    return 0;
}
