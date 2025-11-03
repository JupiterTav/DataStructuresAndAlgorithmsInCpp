#include "binary_search.h"

int binarySearch(int array[], int low, int high, int key){
  while (low <= high){
    int middle = low + (high-low) / 2;
    if(key == array[middle])
        return middle;
    if(key > array[middle])
        low = middle + 1;
    if (key < array[middle])
        high = middle - 1;
  }

  return -1;
}

int recursiveBinarySearch(int array[], int low, int high, int key){
  int middle;
  if(low > high)
    return -1;
  middle = (low + high) / 2;
  if(array[middle] == key)
    return middle;
  if(array[middle] > key)
    return recursiveBinarySearch(array, low, middle-1, key);
  else 
    return recursiveBinarySearch(array, middle+1, high, key);
}


