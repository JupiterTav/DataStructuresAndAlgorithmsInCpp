#include <iostream>
#include "binary_search.h"
using namespace std;

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
