#include <stdio.h>
int main()
{
	/*edit*/
   /* Write your code here */
   int height, i, j,k;
    printf("Enter the height: \n");
    scanf("%d \n", &height);
    printf("The pattern is: \n");
    for (i=1; i<=height; i++){
        printf("%d", i);
        for (j=i; j<i+i-1; j++){
            printf("%d", (j+1)%10);
        }
        
         printf("\n");
    }
	/*end_edit*/
   return 0;
}