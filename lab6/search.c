#include<stdio.h>

int search_iterative(int arr[],int size,int target);
int search_recursive(int arr[],int start, int end, int target);

int main(){
    int numbers[]={10, 25, 33, 48, 56, 72, 89};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int target=48;

    printf("Array:[");
    for (int i=0;i<size;i++){
        printf("%d ",numbers[i]);}
    printf("]\nTarget to find: %d\n\n",target);
    
    int result_iter=search_iterative(numbers,size,target);
    int result_rec=search_recursive(numbers,0,size-1,target);

    printf("---Results---\n");
    printf("Iterative result: Index %d\n",result_iter);
    printf("Recursive result: Index %d\n",result_rec);

    if (result_iter==result_rec){
        printf("\nSuccess.Both methods found the same index.\n");
    }
    else{
        printf("\nError.Results don't match\n");
    }

    return 0;
}

int search_iterative(int arr[],int size, int target){
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int search_recursive(int arr[], int start, int end,int target){
    if (start>end){
        return -1;
    }
    if (arr[start]==target){
        return start;
    }

    return search_recursive(arr, start+1,end,target);
}