#include<stdio.h> 

void ext(int *ptr,int n){

    int min = 1000;
    int max = 0;

    for(int i =0;i<n;i++){
        if(*(ptr+i)>max){
            max = *(ptr+i);
        }
    }

    for(int i=0;i<n;i++){
        if(*(ptr+i)<min){
            min = *(ptr+i);
        }
    }

    printf("The maximum and minimum elements are %d and %d\n",max,min);
}

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    int list[n];

    for(int i =0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        list[i] = temp;
    }

    int *ptr = list;

    ext(ptr,n);

    return 0;
}
