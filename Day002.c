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
