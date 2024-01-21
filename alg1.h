#include <iostream>
#include "functions.h"

void enc_alg1(long long int enc_array[], int len)
{

  // enc array is the array of ASCII values of each character

  for (int i = 0; i < len; i++)
  {
    enc_array[i] += 4;                  
    int num = reverse(enc_array[i]) + 10;
    enc_array[i] = reverse(num); 
  }
}


void dec_alg1(long long int enc_array[], int len)
{

  // enc array is the array of ASCII values of each character

  string rev;

  for (int i = 0; i < len; i++)
  {
    int num = reverse(enc_array[i]) - 10;
    enc_array[i] = reverse(num) - 4; 
  }
}
