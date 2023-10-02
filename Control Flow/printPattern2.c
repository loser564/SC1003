#include <stdio.h>
int main() 
{
	
   int height,i,j; 
   char *ar[10] =  {'A','B','A','B','A','B','A','B','A','B'};
   
 
    printf("Enter the height: \n");
    scanf("%d \n", &height);
    printf("The pattern is: \n");
    for (i=0; i< height; i++){
        if (i%2 == 0){
            for (j=0; j<i+1; j++){
            
            printf("%c", ar[j]);
        }
        }
        else{
            for (j=1; j< i+2; j++){
                printf("%c", ar[j]);
            }
        }
        
        printf("\n");
    }
    
	/*end_edit*/
   return 0;
}