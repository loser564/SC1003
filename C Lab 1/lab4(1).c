#include <stdio.h>
#include <math.h>

int main(){
    double result,sum=0.0,item,x,i=1.000,f=1.00,n;

    printf("Enter x: \n ");
    scanf("%f \n",x);
    for (i=1.0; i<=10; i++){
        f = f*i;
        item = pow(x,i)/f;
        sum = sum + item;


    }

    result = 1 + sum;
    printf("%f \n", sum);
    printf("%.2lf \n", result);




}
