#include<stdio.h>

int main(){
    int num1,num2,num3;
    double average;

    printf("Enter three integers:\n");
    scanf("%d %d %d",&num1,&num2,&num3);

    average=(num1+num2+num3)/3.0;
    
    printf("The average of %d %d %d is %.2f\n",num1,num2,num3,average);
    return 0;
}

