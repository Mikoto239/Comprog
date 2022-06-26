//Temperature Converter

#include<stdio.h>
int main ()
{char originaltem2,convertedtemp;
float result;
int originaltem1;

printf("[f]-Fahrenheit\n[c]-celsius\n[k]-kelvin\n");
printf("Input original temperature value:");
scanf("%d",&originaltem1);
printf("Select original temperature scale:");
scanf("%s",&originaltem2);

switch(originaltem2)
{
case 'f':
    printf("Select converted temperature:");
    scanf("%s",&convertedtemp);


    if(convertedtemp == 'k')
    {
     result=(originaltem1 - 32)* 5/9+ 273.15;
     printf("%d f = %.2f K",originaltem1,result);
    }

   else if (convertedtemp == 'c')
   {
    result=(originaltem1-32)*5/9;
    printf("%d f=%.2f C",originaltem1,result);
   }
  else
   {
    printf("invalid output");
   }
break;

case 'c':
    printf("Select converted temperature:");
    scanf("%s",&convertedtemp);

    if(convertedtemp=='f')
    {
    result=(originaltem1*9/5)+32;
    printf("%d c=%.2f F",originaltem1,result);
    }

   else if (convertedtemp=='k')
    {
    result=originaltem1+273.15;
    printf("%d c= %.2f K",originaltem1,result);
    }

break;


case 'k':
    printf("Select converted temperature:");
    scanf("%s",&convertedtemp);

    if(convertedtemp=='f')
    {
    result=(convertedtemp-273.15)*9/5+32;
    printf("%d k = %.2f F",originaltem1,result);
    }

  else if(convertedtemp=='c')
   {
    result=originaltem1-273.15;
    printf("%d k = %.2f C",originaltem1,result);
   }

break;

default: { printf("invalid output");

}
}
    return 0;
}


// Min and Max

#include<stdio.h>
int main(){
int a,i,min,max,b=1,c=0;


printf("[%d]Input number:",b++);
scanf("%d",&a);


min=a; max=a;
 for (int i=1;i<=9;i++)
 {
     printf("[%d]Input number:",b++);
     scanf("%d",&a);

     if (a<=0)
 {   c=b-1;;
        printf("this is an invalid input. Try Again \n");
        printf("[%d] enter number:",c);
        scanf("%d",&a);
    }
     min=(a<min) ? a:min;
     max=(a>max) ? a:max;

 }
 printf("Min:%d Max:%d",min,max);

return 0;
}


//Number Sorting

#include<stdio.h>
main()
{
int i,j,num,temp,d=1,c=0;

int a[10];

for(i=0;i<10;i++)
{
    printf("[%d]input number:",d++);
    scanf("%d",&a[i]);



if(a[i]<=0)
{c=d-1;
printf("this is an invalid input try again\n");
printf("[%d]input number:",c);
scanf("%d",&a[i]);
}

}
for(i=0;i<10;i++)
{
 for(j=i+1;j<10;j++)
{
 if(a[i]<a[j])
{
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;

}
}

}
for(i=0;i<10;i++)
{
 printf("%d,",a[i]);
return 0;
}

// Letter Grade Equivalent

#include <stdio.h>

int main()
{int grade;

printf("enter grade:");
scanf("%d",&grade);

if(grade>=1 && grade<50)
{
printf("Your letter grade is F");
}
else if (grade >=50 && grade<=59)
{
    printf("Your letter is D");
}
else if (grade>=60 && grade<=67)
{
    printf("Your letter is C");
}
else if (grade>=68 && grade<=75)
{
    printf("Your letter is B-");
}
else if (grade>=76 && grade<=83)
{
    printf("Your letter is B");
}
else if (grade>=84 && grade<=91)
{
    printf("Your letter is A-");
}
else if (grade>=92 && grade<=100)
{
    printf("Your letter is A");
}
else
{
    printf("invalid output");
}



   return 0;
}


}
// The nth Power
#include <stdio.h>
int main() {
  int x,y,exp;
  int result = 1;
  printf("Enter X: ");
  scanf("%d", &x);
  printf("Enter Y: ");
  scanf("%d", &y);
   exp=y;
 for(int i=1;i<=exp;i++)
   { result *= x;
   }

  printf("%d ^ %d = %d",x, y, result);
  return 0;
}

// Pattern Printing
#include<stdio.h>
int main()
{int i,j,a,space;

printf("enter you number:");
scanf("%d",&a);
for( i=1;i<=a;i++)
{
for( space=1;space<=(a-i);space++)
{
    printf(" ");
}
for(j=1;j<=i;j++)
{
    printf(" *");
}
printf(" \n");
}
    return 0;

}

//Decimal to Binary, Octal and Hexadecimal

#include<stdio.h>
int main()
{ int a;

    printf("Enter decimal number:");
    scanf("%d",&a);

    bin(a);
    octa(a);
    hex(a);



    return 0;
}

 void bin(int a)
 { int temp;
   int i;
   int binary=0;
   int j=1;

    temp=a;
  while(temp!=0)
  {
    i=temp%2;
    binary=binary+(i*j);
    temp=temp/2;
    j=j*10;
  }
    printf("binary:%d\n",binary);
 }

void octa(int a)
{
 int templ;
 int b;
 int octal=0;
 int c=1;


 templ=a;
 while(templ!=0) {
  b=templ%8;
  octal=octal+(b*c);
  templ=templ/8;
  c=c*10;
 }
 printf("octal=%d",octal);
}
void hex(int a)
{
   long int decimalNumber,remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];

	quotient =a ;
	while(quotient!=0) {
		temp = quotient % 16;

		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}

	for (j = i -1 ;j> 0;j--)
	      printf("\nHexadecimal=%c",hexadecimalNumber[j]);

}

