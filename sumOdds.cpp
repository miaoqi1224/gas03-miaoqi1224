#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  // STUB!  Replace with correct code.
  int sum = 0; // Initialize sum to 0
  for (int i = 0; i < size; i++) { 
    if (isOdd(a[i])) { // If a[i] is odd
      sum += a[i];
    }
  }
  return sum;
}
