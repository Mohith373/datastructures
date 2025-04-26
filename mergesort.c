#include<stdio.h>
#include<math.h>
#define SIZE 10
void merge(int l,int m,int n);
void mergesort(int i,int h);
int L[SIZE];
void main()
{
int i,n=0;
printf("input number of elements to be sorted\n");
scanf("%d",&n);
printf("input unordered list of elements to be sorted\n");
for(i=0;i<n;i++)
{
scanf("%d",&L[i]);
}
mergesort(0,(n-1));
printf("sorted list \n");
for(i=0;i<n;i++)
{
printf("%d\n",L[i]);
}

}
void mergesort(int first, int last)
{
int mid;
if(first<last)

{
mid=floor((first+last)/2);
mergesort(first,mid);
mergesort(mid+1,last);
merge(first,mid,last);
}
}
void merge(int first, int mid, int last)
{
int first1, last1, first2, last2, i, j;
int temp[SIZE];
first1 = first;
last1 = mid;
first2 = mid + 1;
last2 = last;
i = first;

while (first1 <= last1 && first2 <= last2)
{
if (L[first1] < L[first2])
{
temp[i] = L[first1];
first1++;
}
else
{
temp[i] = L[first2];
first2++;
}

i++;
}

while (first1 <= last1)
{
temp[i] = L[first1];
first1++;
i++;
}

while (first2 <= last2)
{
temp[i] = L[first2];
first2++;
i++;
}

for (j = first; j <= last; j++)
{
L[j] = temp[j];
}
}