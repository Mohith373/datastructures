#include <stdio.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void quicksort(int a[25],int first,int last)
{
  int i,j,pivot;
  if(first<last)
  {
    pivot=first;
    i=first;
    j=last;
    while(i<j)
    {
      while(a[i]<=a[pivot]&&i<last)
        i++;
      while(a[j]>a[pivot])
        j--;
      if(i<j)
        swap(&a[i],&a[j]);
    }
    swap(&a[pivot],&a[j]);
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);
  }
}
int main()
{
  int a[25],n,i;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter %d elements: ",n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  quicksort(a,0,n-1);
  printf("Sorted array is: ");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
