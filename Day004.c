// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.
//
// Input:
// - First line: integer n
// - Second line: n space-separated integers
//
// Output:
// - Print the reversed array, space-separated
//
// Example:
// Input:
// 5
// 1 2 3 4 5
//
// Output:
// 5 4 3 2 1
//
// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays
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
    for(int i = 0 ; i < num/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }
    for(int i = 0 ; i < num ; i++){
        printf("\nthe element in position %d :- %d",i,arr[i]);
    }
}
