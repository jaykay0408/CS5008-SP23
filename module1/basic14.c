#include <stdio.h>

int main() {
  // declare string - as array of 10 char - and initialize it 
  char d[10] = "Silicon";
  int i;

  // d[8] and d[9] are still not initialized

  printf("Our string is: |%s|\n",d);

  //get address of each char in d and print out the address (pointer)
  for (i=0; i<10; i++) {
    // add your code here
  }
  
  return 0;
}
