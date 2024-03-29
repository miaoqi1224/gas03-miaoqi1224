// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions
#include "utility.h"

bool isOdd(int x) {
    return x % 2 != 0;
}

bool isEven(int x) {
    return x % 2 == 0;
}

bool isPrime(int x){
    // Corner case
  if (x <= 1)
    return false;
 
    // Check from 2 to n-1
  for (int i = 2; i <= x / 2; i++)
    if (x % i == 0)
      return false;
 
    return true;
}
 

//bool isOdd(int x) { 
//  return false;  // REPLACE THIS STUB WITH REAL CODE
//}
//bool isEven(int x) { 
//  return false;  // REPLACE THIS STUB WITH REAL CODE
//}
//bool isPrime(int x) { 
//  return false;  // REPLACE THIS STUB WITH REAL CODE
//}
