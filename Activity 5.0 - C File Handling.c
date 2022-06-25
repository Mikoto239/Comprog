#include <stdio.h>
#include <stdlib.h>

int main()
{ FILE * fptr;
int lines,a;
char name[100];
char list[100];

printf("Input the file location:");
scanf("%s",&name);
fptr=fopen(name,"w");
printf("Input how many lines to be appended:");
scanf("%d",&lines);
for(a=0;a<=lines;a++)
{
    fgets(list,sizeof list,stdin);
    fprintf(fptr,"%s",list);
}
fclose(fptr);

return 0;
}
