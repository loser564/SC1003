#include <stdio.h>
int main() 
{     
	
   int lines, i, elements, j, values, results = 0; 
    printf("Enter number of lines: \n");
    scanf("%d \n", &lines );
    for (i=1; i<= lines; i++){
        printf("Enter line %d: \n", i);
        scanf("%d", &elements);
        for (j=0; j< elements; j++){
            scanf("%d", &values);
            results = results + values ;
        }
        printf("Total: %d \n", results);
        results = 0;
    }

	
   return 0;
}


