#include<stdio.h>

int main(){
    int arr[]={23,34,45,22,67,45};
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    int search;
    printf("Enter the element to be search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            printf("The element founded at index %d ",i+1);
            break;
        }
        else{ 
            if(i==n-1){
            printf("Element not found !! ");
            }
        }

    }

}