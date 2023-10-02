#include <stdio.h>

int main()
{
    int item, lines, i;
    double result=0.00,sum,count;
    printf("Enter number of lines: \n");
    scanf("%d", &lines);
    for (i=1; i <= lines; i++){
        printf("Enter line %d (end with -1): \n", i);
        scanf("%d", &item);
        sum = 0.00;
        count = 0.00;
        while (item !=-1){
            sum += item;
            count += 1;
            scanf("%d", &item);

        }

        result = sum/(count);


    printf("Average = %.2f \n", result);
    }
    return 0;
}
