#include <iostream>
#include "functions.h"

void enc_alg0(long long int enc_array[], int len)
{
  // enc array is an array of ASCII values
  for (int i = 0; i < len; i++)
  {
    int num = enc_array[i];
    num = num << 2; // left shift each value by 2 bits
    num = reverse(num); // reverse each integer (87 -> 78)
    num += 10;                   
    enc_array[i] = reverse(num);  // reverse the integer back
  }
}


void dec_alg0(long long int enc_array[], int len){  
  for (int i = 0; i < len; i++)
  {
    int num = reverse(enc_array[i]);
    num -= 10; 
    num = reverse(num);
    num = num >> 2;
    enc_array[i] = num;
  }
}