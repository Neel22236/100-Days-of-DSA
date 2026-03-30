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
