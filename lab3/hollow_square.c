//Textbook 3.33 Hollow Square of Asterisk
#include<stdio.h>

int main(){
    int side;
    printf("Enter the side of a square(1-20):\n");
    scanf("%d",&side);

    int i,j;
    for (i=0;i<side;i++){
        for (j=0;j<side;j++){
            if ((i>0)&&(i<side-1)&&(j>0)&&(j<side-1)){
                printf("  ");
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}