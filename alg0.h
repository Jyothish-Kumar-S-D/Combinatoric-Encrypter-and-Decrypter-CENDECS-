#include <iostream>
#include "functions.h"

void enc_alg0(long long int enc_array[], int len)
{
  // enc array is an array of ASCII values
  for (int i = 0; i < len; i++)
  {
    enc_array[i] <<= 2; // left shift each value by 2 bits
    int rev = reverse(enc_array[i]); // reverse each integer (87 -> 78)
    rev += 10;                   
    enc_array[i] = reverse(rev);  // reverse the integer back
  }
}


void dec_alg0(long long int enc_array[], int len){
  string rev;
  
  for (int i = 0; i < len; i++)
  {
    enc_array[i] >>= 2; // right shift by 2 bits
    enc_array[i] -= 10;                     // adding 10
    rev = reverse(enc_array[i]); // reversing
    enc_array[i] = stoi(rev);
  }
}