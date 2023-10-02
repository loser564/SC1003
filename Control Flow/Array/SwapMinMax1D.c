#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main() 
{
   int ar[50],i,size;
   
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++) 
      scanf("%d",ar+i);
   swapMinMax1D(ar, size);
   printf("swapMinMax1D(): ");
   for (i=0; i<size; i++) 
      printf("%d ",*(ar+i)); 
   return 0;
}
void swapMinMax1D(int ar[], int size)
{
	/*edit*/
  /* Write your code here */
    int max, min, i,j,m,n;
    max = 0;
    min = 0;
    
    for (i=0; i<size; i++){
        if(ar[i] > ar[max]){
            max = i;
        }
    }
    
    for (j=0; j<size; j++){
        if(ar[j] < ar[min]){
            min = j;
        }
    }
    m = ar[min];
    ar[min] = ar[max];
    ar[max] = m;

	/*end_edit*/
}