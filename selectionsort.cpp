#include <iostream>

using namespace std;

void selectionSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
      }
    }
    int temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;
  }
}

int main() {
  int array[] = {10, 8, 7, 6, 5, 4, 3, 2, 1};
  int size = sizeof(array) / sizeof(array[0]);

  selectionSort(array, size);

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  cout << endl;

  return 0;
}
