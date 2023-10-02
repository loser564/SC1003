#include <stdio.h>
int square1(int num);
void square2(int num, int *result);
int main()
{
   int number, result=0;
   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("square1(): %d\n", square1(number));  
   square2(number, &result);
   printf("square2(): %d\n", result);                 
   return 0;
}
int square1(int num)
{  
   int n = 1, sum = 0, count=1, x;
   while (count <= num){
       x = n+2;
       sum = n+x;
        n =x;
       count ++;
       
   }
   
   return sum;
}   
void square2(int num, int *result)
{  
   int n = 1, sum = 0, count=1, x;
   while (count <= num){
       x = n+2;
       sum = n+x;
        n =x;
       count ++;
       
   }
 
   sum = *result;
}