//Textbook 6.15 
//Work out the intersection of two sets of 10 integers
#include<stdio.h>
#define SIZE 10

int main(){
    int set1[SIZE],set2[SIZE];
    int intersection[SIZE];
    int count=0; //record the number of elements in intersection

    printf("Enter the first set of 10 integers:\n");
    for (int i=0; i<SIZE;i++){
        scanf("%d",&set1[i]);
    }

    printf("Enter the second set of 10 integers:\n");
    for (int i=0; i<SIZE;i++){
        scanf("%d",&set2[i]);
    }

    //Find the intersection
    for (int i=0 ; i<SIZE; i++){

        //for each i, check if set1[i] is in set2[j]
        for (int j=0;j<SIZE;j++){
            if (set1[i]==set2[j]){
                // check if this element is already in intersection
                int isDuplicate=0;
                for (int k=0;k<count;k++){
                    if (intersection[k]==set1[i]){
                        isDuplicate=1;
                        break;
                    }
                }
                //if not a duplicate, add to result 
                if (!isDuplicate){
                    intersection[count]=set1[i];
                    count++;
                }
                break;
            }
        }
    }

    printf("\nThe intersection of two sets is:");
    if (count==0){
        printf("Empty set");
    }
    else{
        for (int i=0; i<count;i++){
            printf("%d ", intersection[i]);
        }
    }
    printf("\n");

    return 0;

}