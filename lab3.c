#include <stdio.h>

int main(){
    int height, i,n=0;
    printf("Enter the height: \n");
    scanf("%d ",&height);
    printf("Pattern: \n");
    for (i=1; i<=height; i++){
        for (n=1;n<=i;n++){
            if (i%3 !=0){
            printf("%d", i%3);
            }  
        
            else{
                printf("3");
            }
        
        
        }
        printf("\n");
    }   
c
    return 0;  

}
