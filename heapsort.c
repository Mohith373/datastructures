#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void heapify(int arr[], int n, int i) {
  int largest = i; // Initialize largest as root
  int left = 2 * i + 1; // left child index
  int right = 2 * i + 2; // right child index

  // If left child is larger than root
  if (left < n && arr[left] > arr[largest])
    largest = left;

  // If right child is larger than largest so far
  if (right < n && arr[right] > arr[largest])
    largest = right;

  // If largest is not root
  if (largest != i) {
    swap(&arr[i], &arr[largest]); // Swap root with largest

    // Recursively heapify the affected sub-tree
    heapify(arr, n, largest);
  }
}
void heapsort(int arr[], int n) {
  // Build heap (rearrange array)
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // One by one extract an element from heap
  for (int i = n - 1; i >= 0; i--) {
    swap(&arr[0], &arr[i]); // Move current root to end

    // Call max heapify on the reduced heap
    heapify(arr, i, 0);
  }
}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
int main() {
  int arr[10];
  
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter %d elements: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    printf("Unsorted array is \n");
  printArray(arr, n);
  heapsort(arr, n);
  

  printf("Sorted array is \n");
  printArray(arr, n);

}
