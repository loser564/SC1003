#include <stdio.h>
int main() 
{
   
	/*edit*/
    /* Write your code here */
    int tempF;
    float tempC;
    printf("Enter the temperature in degree F: \n");
    scanf("%d", &tempF);
    do{
        
        tempC = tempF - 32;
        tempC = tempC * 5.0;
        tempC = tempC / 9.0;
        printf("Converted degree in C: %.2f \n", tempC);
        printf("Enter the temperature in degree F: \n");
        scanf("%d", &tempF);
    }while(tempF != (-1));
    

	/*end_edit*/

   return 0;
}