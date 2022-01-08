#include<stdio.h> 

int binarySearch(int arr[],int num,int size){

    int low,high,mid;
    int result = -1;
    low = 0;
    high = size-1;

    while(low<=high){

        mid = (low+high)/2;

        if(arr[mid]==num){
            result = mid;
        }

        if(arr[mid]>num){
            high = mid -1;
        }

        else{
            low = mid + 1;
        }
    }

    return result;

}

int main(){
    
    int arr[] = {2,4,6,8,10,12,14,16,18};
    int num;
    int size;

    printf("Enter the key to find the position\n");
    scanf("%d",&num);

    size = sizeof(arr)/sizeof(int);

    int result;
    result = binarySearch(arr,num,size);

    printf("The position of the key %d is %d\n",num,result);

    return 0;
}
