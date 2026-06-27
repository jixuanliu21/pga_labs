#include <stdio.h>

int main(){
    int hours,minutes,seconds;
    int total_seconds;

    printf("Enter hours:");
    scanf("%d",&hours);

    printf("Enter minutes:");
    scanf("%d",&minutes);

    printf("Enter seconds:");
    scanf("%d",&seconds);

    total_seconds=(hours*3600)+(minutes*60)+seconds;

    printf("%d hours(s),%d minute(s) and %d second(s) is equal to %d total seconds.\n",hours,minutes,seconds, total_seconds);
    
    return 0;
}