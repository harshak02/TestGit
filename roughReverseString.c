#include<stdio.h> 

int main(){
    char name[] = "harsha";
    char name1[100];

    for(int i=0;i<6;i++){
        name1[i] = name[6-i-1];
    }

    name1[6] = '\0';
    printf("%s",name1);

    return 0;
}
