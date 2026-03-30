//Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

//Input:
//- First line: integer n (array size)
//- Second line: n space-separated integers
//- Third line: integer k (key to search)

//Output:
//- Line 1: "Found at index i" OR "Not Found"
//Line 2: "Comparisons = c"

//Example:
//Input:
//5
//10 20 30 40 50
//30

//Output:
//Found at index 2
//Comparisons = 3

//Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)
#include<stdio.h>

int main(){
    int num ;
    printf("\nEnter how many elements you want in array");
    scanf("%d", &num);
    int arr[num];
    for(int i = 0 ; i < num ; i++){
        printf("\nEnter a element in position %d :-",i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search :-");
    int k;
    scanf("%d", &k);
    for(int i = 0 ; i < num ; i++){
        if(k==arr[i]){
            printf("\nThe element key %d was found on index %d",k,i);
            printf("\nand was found after %d comparison",i+1);
            return 0;
        }
    }
    printf("element not found");
    return 0;
}
