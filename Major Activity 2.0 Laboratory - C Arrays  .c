#include <stdio.h>

int main(){
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(func(arr,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}
void func(int ar[3][2],int d, int in){
       int j=0;
       for(int i = 0; i<3; i++){
        if(d == ar[i][0] && in == ar[i][1])
        { 
            j+=1;
            }
     return j;
}
}