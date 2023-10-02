#include <stdio.h>
#include <math.h>
int main()
{      
	/*edit*/
   /* Write your code here */
    int octal, decimal=0, i =0;
    printf("Enter an octal number: \n");
    scanf("%d",&octal);
    
    while (octal > 0){
        decimal += (octal % 10) * pow(8,i);
        i ++;
        octal = octal/10;
    }
    printf("The equivalent decimal number: %d", decimal);

	/*end_edit*/
   return 0;  
}