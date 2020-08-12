//This is a program to multiply two polynomials ax+b and cx+d
#include <stdio.h>

int main(){
    int a,b,c,d;
    int p2,p1,p0;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("Enter c");
    scanf("%d",&c);
    printf("Enter d");
    scanf("%d",&d);
    p0 = a*c;
    p1= a*d+b*c;
    p2 = b*d;
    printf("The product is %d x^2 + %d x + %d\n",p2,p1,p0);

}




