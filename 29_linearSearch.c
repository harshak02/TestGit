#include<stdio.h>

int linearSearch(int arr[],int n,int size){

    int result = -1;

    for(int i =0;i<size;i++){

        if(n==arr[i]){
            result = i;
        }
    }

    return result;
}


int main(){

    int arr[] = {7,56,34,55,90,20,11,23,45,89,90,31,22,29};
    int size = sizeof(arr)/sizeof(int);

    int n;
    int result;
    printf("Enter the key to find position\n",n);
    scanf("%d",&n);

    result = linearSearch(arr,n,size);
    printf("The position of %d in the list is %d\n",n,result);

    return 0;
}
