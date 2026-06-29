//Textbook 5.15 Hypotenuse
#include<stdio.h>
#include<math.h>

//Declaration: A function named hypo receives two parameters and returns a double type value
//Tells compiler that 'hypo' exists → main can call it safely 
double hypo(double m, double n);


//Main
int main(){
    double m,n;
    printf("Enter the length of the two legs: ");
    scanf("%lf %lf",&m,&n);

    double hy=hypo(m,n);
    printf("The hypotenuse is %.3lf\n",hy);

    return 0;
}

//Define function hypo
double hypo(double m,double n){
    return sqrt(pow(m,2)+pow(n,2));
}