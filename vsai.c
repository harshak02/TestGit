#include<stdio.h> 

int main(){
    int i,n,fac;
    scanf("%d",&n);

    fac = 1;

    for(i=1;i<=n;i++){
        fac*=i;
    }

    printf("%d",fac);

    return 0;
}
