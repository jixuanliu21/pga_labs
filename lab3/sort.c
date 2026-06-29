//Bubble sort
#include <iostream>
using namespace std;

int a[102];
void bubble_sort(int n){
    int i,j;
    for (i=0;i<n-1;i++){
        bool swapped=false;
        for (j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if (!swapped) break;
    }
}

int main(){
    int n,i;
    scanf("%d",&n);

    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        bubble_sort(n);
    }
    for (i=0;i<n;i=+){
        printf("%d ",a[i]);
    }

    return 0;
}