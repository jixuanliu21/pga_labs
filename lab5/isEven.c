//Textbook 5.18 Even/odd checker
#include<stdio.h>

//C语言中定义函数格式 返回值类型+函数名字+（参数列表）
void even(int n);
 int main(void){
    int n;
    printf("Enter the first integer (-1 to quit): ");
    scanf("%d",&n);

    while (n!=-1){
        even(n);
        printf("Enter another number (-1 to quit): ");
        scanf("%d",&n);
    }

    printf("The game is over!");

    return 0;
 }

 void even(int n){
    if (n%2==0){
       printf("The number is even. \n");
    }
    else{printf("This number is odd. \n");
    }
    
 }