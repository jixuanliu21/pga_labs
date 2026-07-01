//Exercise:Sorting an array of numbers
#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter number of mark:");
    scanf("%d",&n);

    int arr[n];

    //Get input number from user
    for (i=0;i<n;i++){
        printf("Enter mark %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    //Bubble sort (Descending order)
    //Outer loop: Controls (n-1) loops
    for (i=0;i<n-1;i++){
        //Inner loop: Compare adjacent elements each time
        for (j=0;j<n-1-i;j++){
            //If the former element is smaller, swap
             if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}