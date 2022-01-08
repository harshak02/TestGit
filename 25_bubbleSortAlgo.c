#include<stdio.h> 

void printArray(int n,int arr[]){

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}

void bubbleSort(int n,int arr[]){

    int j = 0;

    for(int i = 0;i< n-1;i++){

        int imp = 1;
        j++;
        printf("Working on the %d pass\n",j);

        for(int j = 0;j<n-1-i;j++){

            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                imp = 0;

            }

        }

        if(imp==1){
            printf("Worked last on the %d pass\n",j);
            break;
        }
    }

}

int main(){

    int arr[] = {9,2,4,6,1,3};
    int n = 6;

    printArray(n,arr);
    bubbleSort(n,arr);
    printf("\n");
    printArray(n,arr);

    return 0;
}
