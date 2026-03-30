//Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

//Input:
//- First line: integer n
//- Second line: n space-separated integers
//- Third line: integer pos (1-based position to delete)

//Output:
//- Print the updated array with (n-1) elements, space-separated

//Example:
//Input:
//5
//10 20 30 40 50
//2

//Output:
//10 30 40 50

//Explanation: Delete position 2 (element 20), remaining elements shift left
#include<stdio.h>
int main(){
    int num;

    printf("\nEnter how many elements you want in :- ");
    scanf("%d",&num);

    int arr[num];

    for(int i = 0 ; i < num ; i++){
        printf("\nEnter element in position %d :- ",i);
        scanf("%d",&arr[i]);
    }

    int n;

    printf("\nEnter the position you want to delete :- ");
    scanf("%d",&n);

    n = n - 1;

    for(int i = n ; i < num - 1 ; i++){
        arr[i] = arr[i+1];
    }

    num = num -1;

    for(int i = 0 ; i < num ; i++){
        printf("\nelement in position %d :- %d",i,arr[i]);
    }
}
