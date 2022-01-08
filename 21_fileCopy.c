#include<stdio.h> 
#include<string.h>

int main(){

    char c;
    char text[100];

    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("fileImp.txt","r");
    ptr2 = fopen("fileMain.txt","w");

    int i = 0;

    while(c!=EOF){
        fflush(stdin);
        c = fgetc(ptr1);
        text[i] = c;
        i++;
    }

    fclose(ptr1);

    for(int j = 0;j<i-1;j++){
        fputc(text[j],ptr2);
    }

    fclose(ptr1);
    printf("Operation Done");

    return 0;
}
