#include<stdio.h>

void printArray(int arr[],int n){

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}

void selectionSort(int arr[],int n){

    for(int i =0;i<n-1;i++){

        for(int j =i+1;j<n;j++){

            if(arr[i]>arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {9,2,4,6,1,3};
    int n = 6;

    printArray(arr,n);
    selectionSort(arr,n);
    printf("\n");
    printArray(arr,n);

    return 0;
}
