#include<stdio.h> 

int main(){
    
    char text[100];
    char c;

    FILE *ptr1;
    ptr1 = fopen("file01.txt","r");
    FILE *ptr2;
    ptr2 = fopen("file02.txt","r");

    int i = 0;
    int j = 0;

    while(1){

        c = fgetc(ptr1);
        if(c!=EOF){
            text[i] = c;
            i++;
        }

        else{
            break;
        }

    }

    fclose(ptr1);

    text[i] = ' ';
    i++;

    while(1){

        c = fgetc(ptr2);
        if(c!=EOF){
            text[i+j] = c;
            j++;
        }

        else{
            break;
        }

    }

    text[i+j] = '\0';

    fclose(ptr2);

    FILE *ptr3;
    ptr3 = fopen("file03.txt","w");

    for(int k=0;k<i+j;k++){

        fputc(text[k],ptr3);
    }
    fclose(ptr3);

    printf("The Operation is Done\n");

    return 0;
}
