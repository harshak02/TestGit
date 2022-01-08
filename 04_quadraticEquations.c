#include<stdio.h> 
#include<math.h>
#include <stdlib.h>

int main(){

    int a,b,c;
    printf("Enter the coefficents of quadratic equations\n");
    scanf("%d%d%d",&a,&b,&c);

    int det;
    det = b*b-4*a*c;

    if(a==0){
        printf("Invalid Quadratic Equation\n");
    }

    else{

        if(det<0){
        printf("The both roots are imaginary\n");

        float real = (float)(-b)/(2*a);
        float imag = (sqrt(-det))/2*a;
        printf("The root1 is %.2f + %.2fi\n",real,imag);
        printf("The root2 is %.2f - %.2fi\n",real,imag);

    }

        else{
            float root1 = (-b + sqrt(det))/(2*a);
            float root2 = (-b - sqrt(det))/(2*a);
    
            printf("The roots are %.2f and %.2f\n",root1,root2);
        }

        
    }

    
    return 0;
}
