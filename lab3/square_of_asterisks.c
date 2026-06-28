//Textbook 3.32 Square of Asterisks
// Read the side of a square (1-20) and print the square out of asterisks
#include<stdio.h>

int main(){
    int side;
    printf("Enter the side of a square (1-20):\n");
    scanf("%d",&side);

    int i,j;
    for (i=0;i<side;i++){
        for (j=0;j<side;j++){
            printf("*  ");
        }
        printf("\n");
    }


    return 0;
}