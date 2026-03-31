// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
//
// Input:
// - First line: integer n
// - Second line: n space-separated integers (sorted array)
//
// Output:
// - Print unique elements only, space-separated
//
// Example:
// Input:
// 6
// 1 1 2 2 3 3
//
// Output:
// 1 2 3
//
// Explanation: Keep first occurrence of each element: 1, 2, 3
#include <stdio.h>
int main() {
    int n;
    printf("\nEnter how many elements you want in array :- ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
            printf("\nEnter the element in position %d :- ",i+1);
        scanf("%d", &arr[i]);
    }

    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    for (int i = 0; i < uniqueCount; i++) {
        printf("%d%s", arr[i], (i == uniqueCount - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}
