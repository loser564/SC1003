#include <stdio.h>
int numDigits1(int num);
int main()
{

    int number, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d\n", numDigits1(number));
    numDigits2(number, &result);
   printf("numDigits2(): %d\n", result);

    return 0;
}

int numDigits1(int num)
{
    int count = 0;
    while (num != 0){
        num = num/10;
        count ++;
    }

    return count;
}

void numDigits2(int num, int *result)
{
    *result = 0;
    while (num !=0){
        num = num/10;
        (*result) ++;
    }
}


