#include<stdio.h> 
#include<string.h>
#include<stdlib.h>

void del(int num,int pos,char text[100]){

    int len;
    len = strlen(text);

    int imp = len-num;

    char new[imp];
    int j=0;

    for(int i =0;i<len;i++){

        if(i<pos-1){
            new[j] = text[i];
            j++;
        }

        else if(i>=pos+num-1){
            new[j] = text[i];
            j++;
        }
    }

    new[imp] = '\0';

    printf("The new string is %s\n",new);
}

int main(){
    char text[100];

    printf("Enter the text \n");
    gets(text);

    int num;
    printf("Enter the number of the chars to delete\n");
    scanf("%d",&num);

    int pos;
    printf("Enter the number of the position to get deleted\n");
    scanf("%d",&pos);

    del(num,pos,text);

    return 0;
}
