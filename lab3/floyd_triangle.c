//Textbook 3.34 Floyd's Triangle (10 lines)
//A right-angled triangular array of natural numbers
#include<stdio.h>
int main(){
    int row=10; //Define total lines
    int num=1;
    printf("Floyd's Triangle(10 lines):\n");

    //Outer loop controls the current row
    for (int i=1;i<=row;i++){

        //Inner loop controls how many numbers are printed per row
        for (int j=1;j<=i;j++){
            printf("%-4d",num);
            num++; 
    }
    printf("\n");
    }

    return 0;
}