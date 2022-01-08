#include<stdio.h> 
#include<string.h>

void check(char name[1000]){

    int len;
    int imp = 0;
    len = strlen(name);

    for(int i =0;i<len;i++){
    
        if(name[i]!=name[len-i-1]){
            imp=1;
            break;
        }
    }

    if(imp==0){
        printf("The %s is palindrome",name);
    }

    else if(imp==1){
        printf("The %s is not palindrome",name);
    }

}

int main(){
    char name[1000];

    printf("Enter the string\n");
    gets(name);

    check(name);
    return 0;
}
