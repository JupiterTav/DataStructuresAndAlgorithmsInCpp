#include <iostream>
using namespace std;

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

int main(){
  int numbers[] = {1, 3, 5, 9, 10, 12, 15, 17, 20, 22, 26};
  int n = sizeof(numbers) / sizeof(numbers[0]); //number's lenght

  for(int i = 0; i <= n-1; i++)
    cout << numbers[i] << " ";

  int number;
  cout << "\nInsert a number: ";
  cin >> number;

  int result = recursiveBinarySearch(numbers, 0, n-1, number);

  if(result == -1)
      printf("There's no %d element in the array\n", number);
  else 
      printf("The index of the element is %d\n", result);
}
