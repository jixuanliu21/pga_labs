#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    printf("Enter a float a:\n");
    scanf("%lf",&a);
    printf("Enter a float b:\n");
    scanf("%lf",&b);
    c=sqrt(pow(a,2)+pow(b,2));

    printf("Hypotenuse c is : %.2f\n",c);


    return 0;
}