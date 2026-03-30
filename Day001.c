//Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

//Input:
//- First line: integer n
//- Second line: n space-separated integers (the array)
//- Third line: integer pos (1-based position)
//- Fourth line: integer x (element to insert)

//Output:
//- Print the updated array (n+1 integers) in a single line, space-separated

//Example:
//Input:
//5
//1 2 4 5 6
//3
//3

//Output:
//1 2 3 4 5 6

//Explanation: Insert 3 at position 3, elements [4,5,6] shift right
#include<stdio.h>
int main(){
    int num;

    printf("\nEnter a number :- ");
    scanf("%d",&num);

    int arr[num+1];

    for(int i = 0 ; i < num ; i++){
        printf("\nEnter Element of position %d :-",i+1);
        scanf("%d",&arr[i]);
    }

    int data,pos;

    printf("\nEnter a new number");
    scanf("%d", &data);

    printf("\nEnter new position");
    scanf("%d", &pos);

    for(int i = num; i >= pos;i--){
        arr[i] = arr[i-1];
    }

    arr[pos - 1] = data;

    for(int i = 0 ; i <= num ; i++){
        printf("\n %d",arr[i]);
    }
}
