// Problem: Given integers a and b, compute a^b using recursion without using pow() function.
//
// Input:
// - Two space-separated integers a and b
//
// Output:
// - Print a raised to power b
//
// Example:
// Input:
// 2 5
//
// Output:
// 32
//
// Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32
#include<stdio.h>
int power(int n , int p){
    if(p == 0){
        return 1;}
    return n * power(n,p-1);
}

int main(){
    int n , p;
    printf("\nEnter a number :- ");
    scanf("%d", &n);
    printf("\nEnter it's power :- ");
    scanf("%d", &p);
    printf("\nThe number is :- %d", power(n,p));
}
