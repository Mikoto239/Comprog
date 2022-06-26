#include <stdio.h>
#include <stdlib.h>

int main()
{ int id,unit,a,b,result;


  printf("Input Customer ID:");
  scanf("%d",&id);
  printf("Input the unit consumed by the Customer :");
  scanf("%d",&unit);
   if(unit==100)
  {
      printf("The minimum bill should be P100");
  }
else{

  printf("\n[ELECTRIC BILL]\nCustomer ID#                               :%d\n",id);
  printf("the unit consumed by the Customer          :%d\n",unit);


charge(&unit);
a=unit;
sur(&a);
b=a;
total(unit,b);
}

    return 0;
}

int charge(int *unit)
{ float a;
    if( *unit>101 && *unit<=249)
    {
        *unit=*unit * 1.50;
         a=*unit;

        printf("unit Charge @p. 1.50 per unit              :P %.2f\n",a);
    }
    else if (*unit>=250 && *unit<=450)
    {
        *unit=*unit*1.60;
        a=*unit;

        printf("unit Charge @p. 1.60 per unit              :P %.2f\n",a);
    }
    else if (*unit >=450 && *unit<=600)
    {
        *unit=*unit*1.85;
        a=*unit;

        printf("unit Charge @p. 1.85 per unit              :P %.2f\n",a);
    }
    else if (*unit>=600)
    {
        *unit=*unit*2.00;
        a=*unit;

        printf("unit Charge @p. 2.00 per unit              :P %.2f\n",a);

    }

}

  int sur(int *sum)
{  float result=0;
if (*sum >= 400)
  {
    *sum=*sum/10;
      result=*sum;
     printf("Surcharge Amount                           :P %.2f",result);

  }
    else
  {
        printf("Surcharge Amount                           :P %.2f",result);

  }

}

  int total(int unit,int b)
{ float amount=0;
if(unit == b)
{
    amount=unit+b;
    amount=amount/2;
    printf("\nTotal Customer Bill                        :P %.2f",amount);
}
else
  {
      amount=unit+b;
   printf("\nTotal Customer Bill                        :P %.2f",amount);
  }
 return total;
}


