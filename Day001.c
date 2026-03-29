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
