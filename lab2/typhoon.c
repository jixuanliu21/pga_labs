#include<stdio.h>
int main(){
    int wind_speed;
    printf("Enter the wind speed(km/h):");
    scanf("%d",&wind_speed);

    if (wind_speed>=193){
        printf("Violent Typhoon\n");
    }   else if(wind_speed>=157){
        printf("Very Strong Typhoon\n");
    }   else if(wind_speed>=119){
        printf("Strong Typhoon\n");
    }   else if(wind_speed>=63){
        printf("Typhoon\n");
    }   else{
        printf("Tropical Depression\n");
    }

    return 0;
}