#include <stdio.h>
#define TRUE 1
#define FALSE 0
int romanNum(char *str);
int main()
{ 
   int num;
   char roman[10];
   printf("Enter a Roman number: \n");
   scanf("%s",roman);
   num = romanNum(roman);
   printf("romanNum(): %d\n", num);
   return 0;
}
int romanNum(char *str)
{        
	/*edit*/
   /* Write your code here */
    int flag = FALSE ,value = 0,len,j;
    char n;
    len = strlen(str);
    for (j=0;j<len;j++){
        n = str[j];
        switch(n){
            case ('I'): 
                value+=1;
                if (flag == FALSE){
                    flag = TRUE;
                }
                else{
                    flag = TRUE;
                }
            break;
            case ('V'): 
                if (flag == TRUE){
                    value += 3;
                }
                else{
                    value +=5;
                }
            break;
            case ('X'): 
                if (flag == TRUE){
                    value += 8;
                }
                else{
                    value +=10;
                }
            }

    }
    
    return value;
	/*end_edit*/
}