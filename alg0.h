#include <iostream>
#include "functions.h"

void enc_alg0(long long int enc_array[], int len)
{
  // enc array is an array of ASCII values
  for (int i = 0; i < len; i++)
  {
    enc_array[i] <<= 2; // left shift each value by 2 bits

    int rev = reverse(enc_array[i]); // reverse each integer (87 -> 78)
    enc_array[i] = rev;
    enc_array[i] += 10;                     // adding 10
    rev = reverse(to_string(enc_array[i]));  // reverse the integer back
    enc_array[i] = stoi(rev);
  }
}


void dec_alg0(long long int enc_array[], int len){
  string rev;
  
  for (int i = 0; i < len; i++)
  {
    enc_array[i] >>= 2; // right shift by 2 bits

    rev = reverse(enc_array[i]); // reversing
    enc_array[i] = stoi(rev);
    enc_array[i] -= 10;                     // adding 10
    rev = reverse(enc_array[i]); // reversing
    enc_array[i] = stoi(rev);
    enc_array[i] >>= 2; // right shift by 2 bits
  }
}