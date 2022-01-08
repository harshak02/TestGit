#include<stdio.h> 

void printArray(int arr[],int n){

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}

void insertionSort(int arr[],int n){

    for(int i =1;i<=n-1;i++){
        int key;
        int j = i-1;
        key = arr[i];

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main(){

    int arr[] = {9,2,4,6,1,3};
    int n = 6;

    printArray(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);

    printf("Hello World");
    
    return 0;
}
