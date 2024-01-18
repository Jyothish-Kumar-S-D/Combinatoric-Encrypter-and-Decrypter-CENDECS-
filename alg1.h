#include <iostream>
#include "functions.h"

void enc_alg1(long long int enc_array[], int len)
{
  for (int i = 0; i < len; i++)
  {
    // taking enc_array[i] and manipulating it
    enc_array[i] += 4;                    // adding 4
    string num = to_string(enc_array[i]); // Reversing
    num = Reverse(num);
    enc_array[i] = stoi(num) + 10;        // adding 10
    num = to_string(enc_array[i]); // Reversing
    num = Reverse(num);
    enc_array[i] = stoi(num);
  }
}
