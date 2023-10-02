#include <stdio.h>
#include <math.h>
int main()
{
	/*edit*/
   /* Write your code here */
    int decNum,binary[10],rem, i=0,j;
    printf("Enter a decimal number: \n");
    scanf("%d", &decNum);
    
    while(decNum > 0){
        rem = decNum % 2;
        decNum = decNum/2;
        //printf("rem: %d \n", rem);
        binary[i] = rem;
        //printf("binary[i]: %d\n", binary[i]);
        i ++;
        //printf("i: %d \n", i);
   
    }
    printf("The equivalent binary number: ");

    for (j=0;j<i;j++){
        printf("%d", binary[i-j-1]);
    }
    
   
   
	/*end_edit*/
   return 0;  
}