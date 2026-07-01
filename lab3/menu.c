//Exercise: menu driven calculator
#include<stdio.h>

int main(){
    int input;
    int a,b;
    printf("Enter your option(1-4,-1 to exit):");
    scanf("%d",&input);

    while (input!=-1){
        if (input==1){
            printf("Enter 2 integers:");
            scanf("%d %d",&a,&b);
            printf("%d plus %d is %d\n",a,b,a+b);
        }
        else if (input==2){
            printf("Enter 2 integers:");
            scanf("%d %d",&a,&b);
            printf("%d multiplied by %d is %d\n",a,b,a*b);
        }
        else if (input==3){
            printf("Enter 2 integers:");
            scanf("%d %d",&a,&b);
            printf("%d modulus %d is %d\n",a,b,a%b);
        }
        else if (input==4){
            break;
        }
        else{
            printf("Invalid option.\n");
        }
        printf("\nEnter your option (1-4,-1 to exit):");
        scanf("%d",&input);
    }

    return 0;
}