#include <stdio.h>
void main()
{
int array[10];
int i, j, num, temp, search;
int low, mid, high;
printf("Enter the size ");
scanf("%d", &num);
printf("\nEnter %d elements \n",num);
for (i = 0; i < num; i++)
{
scanf("%d", &array[i]);
}
for (i = 0; i < num; i++) // Bubble Sort to sort the elements
{
for (j = 0; j < (num - i - 1); j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
}
}
}
printf("\n Sorted array is...\n");
for (i = 0; i < num; i++)
{
printf("%d\t", array[i]);
}
printf("\nEnter the element to be searched \n");
scanf("%d", &search);
low = 0; // Corrected to 0-based indexing
high = num - 1; // Corrected to 0-based indexing
do
{
	mid = (low + high) / 2;
	if (search < array[mid])
	{
		high = mid - 1;
	}
	else if (search > array[mid])
	{
		low = mid + 1;
	}
	else
	{
		printf("SEARCH ELEMENT %d IS FOUND at %d POSITION\n", search, mid + 1);
		break;
	}
} while (low <= high);

if (low > high)
{
	printf("SEARCH ELEMENT %d IS NOT FOUND\n", search);
}
}