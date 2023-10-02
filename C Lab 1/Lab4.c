#include <stdio.h>
#include <math.h>

int main(){
    int i,f=1;
    double result,sum=0.0,item,x;

    printf("Enter x: \n ");
    scanf("%lf ",&x);
    for (i=1.0; i<=10.0; i+=1.0){
        f = f*i;
        item = pow(x,i)/f;
        sum = sum + item;
        
    }

    result = 1 + sum;
    printf("%f \n", sum);
    printf("%.2lf \n", result);



return 0;
}
