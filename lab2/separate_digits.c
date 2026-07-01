#include<stdio.h>

int main(){
    int number;

    printf("Enter a 5-digit integer:");
    scanf("%d",&number);

     int d1 = number % 10;     
    number = number / 10;
    
    int d2 = number % 10;      
    number = number / 10;
    
    int d3 = number % 10;       
    number = number / 10;
    
    int d4 = number % 10;       
    int d5 = number / 10;       

    printf("%d %d %d %d %d\n", d5, d4, d3, d2, d1);

    return 0;
}

