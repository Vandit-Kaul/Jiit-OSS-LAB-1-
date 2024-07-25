#include <stdio.h>
#include <stdlib.h>




int main() {
  int n;
  int avg=0;
   printf("Enter the number of elements you want to enter in the array: ");
  scanf("%d",&n);
  int arr[n];
   for(int i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }
  for(int i=0;i<n;i++)
    {
      avg=avg+arr[i];
    }
  printf("The average of the array is %d",avg/n);

}

