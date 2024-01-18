#include <iostream>
#include "functions.h"

void enc_alg0(long long int enc_array[], int len)
{
  for (int i = 0; i < len; i++)
  {// taking enc_array[i] and manipulating it
    enc_array[i]<<=2;//left shift by 2 bits
    string rev=Reverse(to_string(enc_array[i]));//reversing
    enc_array[i]=stoi(rev);
    enc_array[i]+=10;//adding 10
    rev=Reverse(to_string(enc_array[i]));//reversing
    enc_array[i]=stoi(rev);
  }
}