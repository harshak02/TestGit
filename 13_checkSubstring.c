#include<stdio.h> 
#include<string.h>

int check(char name[1000],char sub[100]){

    int temp1;
    temp1 = strlen(name);
    int temp2;
    temp2 = strlen(sub);
    int imp=0;
    int pos;
    
    for(int i =0;i<temp1;i++){
        int result = 0;
        for(int j=0;j<temp2;j++){

            if(name[i+j]==sub[j]){
                result++;
                pos = i+1;
            }


        }

        if(result==temp2){
            imp=1;
            printf("The position of the substring in main string is %d\n",pos);
            break;
        }
    }

    return imp;

}

int main(){

    char name[1000];
    char sub[100];

    printf("Enter the main string\n");
    gets(name);

    printf("Enter the sub string\n");
    gets(sub); 

    int result;

    result = check(name,sub);

    if(result==1){
        printf("The string %s is present in %s\n",sub,name);
    }

    else{
        printf("The string %s is not present in %s\n",sub,name);
    }
    
    return 0;
}
