#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include"utility.cpp"

int countEvens(int a[], int size) {
  int count = 0; // Initialize count of even numbers to 0
  for (int i = 0; i < size; i++) { // Loop through each element of the array
    if (isEven(a[i])) {//s Check if the current element is even
      count++; 
    }
  }
  return count; 
}