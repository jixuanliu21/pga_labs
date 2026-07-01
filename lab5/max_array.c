//Maximum of an array
#include<stdio.h>

int max(int len , int arr[]);

int main(){
    int i, len;
    printf("Enter the length of the array:\n");
    scanf("%d", &len);

    int arr[len];
    printf("Please enter %d numbers separated by spaces:\n", len);
    for (i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The array you entered is:[ ");

    for (int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

    printf("]\n");
    printf("The max element of it is %d\n",max(len,arr));

    return 0;
}

int max(int len, int arr[len]){
    int max_val = arr[0]; 
    for (int i = 1; i < len; i++) {
         if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    
    return max_val;
}

