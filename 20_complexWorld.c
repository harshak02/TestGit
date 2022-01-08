#include<stdio.h> 

typedef struct complex{
    
    int real;
    int imag;
}comp;

void printData(comp c){
    printf("The complex number is %d + %di\n",c.real,c.imag);
}

comp sum(comp c1,comp c2){
    comp result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;   
}

comp mult(comp c1,comp c2){
    comp result;
    result.real = c1.real*c2.real - c1.imag*c2.imag; 
    result.imag = c1.real*c2.imag + c1.imag*c2.real;

    return result;

}

comp subr(comp c1,comp c2){
    comp result;
    result.real = c1.real - c2.real; 
    result.imag = c1.imag - c2.imag;

    return result;

}

comp divi(comp c1,comp c2){
    comp result;
    result.real = (c1.imag*c2.real-c1.real*c2.imag)/(c2.real*c2.real)+(c2.imag*c2.imag); 
    result.imag = (c1.real*c2.real+c1.imag*c2.imag)/(c2.real*c2.real)+(c2.imag*c2.imag);

    return result;

}

int main(){
    
    comp c1;
    comp c2;
    comp add;
    comp mul;
    comp div;
    comp sub;


    printf("Enter the 1st complex number's real number\n");
    scanf("%d",&c1.real);

    printf("Enter the 1st complex number's imaginary number\n");
    scanf("%d",&c1.imag);

    printf("Enter the 2nd complex number's real number\n");
    scanf("%d",&c2.real);

    printf("Enter the 2nd complex number's imaginary number\n");
    scanf("%d",&c2.imag);

    printData(c1);
    printData(c2);

    add = sum(c1,c2);
    mul = mult(c1,c2);
    div = divi(c1,c2);
    sub = subr(c1,c2);

    printf("The sum of the complex numbers is %d + %di\n",add.real,add.imag);
    printf("The multiplication of the complex numbers is %d + %di\n",mul.real,mul.imag);
    printf("The subraction of the complex numbers is %d + %di\n",sub.real,sub.imag);
    printf("The division of the complex numbers is %d + %di\n",div.real,div.imag);


    return 0;
}
