// Problem: Read a string and check if it is a palindrome using two-pointer comparison.
//
// Input:
// - Single line: string s
//
// Output:
// - Print YES if palindrome, otherwise NO
//
// Example:
// Input:
// level
//
// Output:
// YES
//
// Explanation: String reads same forwards and backwards
#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    if (scanf("%s", s) != 1) return 0;

    int left = 0;
    int right = strlen(s) - 1;

    // Keep moving as long as characters match
    while (left < right && s[left] == s[right]) {
        left++;
        right--;
    }

    // If the loop finished and pointers met/crossed, it's a palindrome
    if (left >= right) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
