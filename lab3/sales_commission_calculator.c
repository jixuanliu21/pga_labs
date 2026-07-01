//Textbook 3.32 sales_commission_calculator
#include <stdio.h>

int main(){
    float m=0;
    printf("Enter sales in dollars(-1 to end):");
    scanf("%f",&m);

    while (m!=-1){
        float sal=m*0.09+200;
        printf("Salary is %.2f\n",sal);

        // Decide entering the loop again or not
        printf("Enter sales in dollars(-1 to end):");
        scanf("%f",&m);
    }

    return 0;
}