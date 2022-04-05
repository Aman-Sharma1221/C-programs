#include <stdio.h>

void printArray(int array[], int n) {
  for (int i = 0; i < n ; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int n)
 {
  for (int i = 1; i < n ; i++)
   {
    int key = array[i];
    int j = i - 1;
    while (key < array[j] && j >= 0)
     {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
}
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}
