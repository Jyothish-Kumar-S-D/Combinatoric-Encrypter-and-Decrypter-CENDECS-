#include <iostream>
#include "functions.h"

void enc_alg2(long long int enc_array[], int len)
{   
    for (int i=0;i<len;i++)
    {
        int element = enc_array[i];
        for (int i=1; i<=10; i++){
            element = element + i;
            element = reverse(element);
        }
        enc_array[i] = element;
    }
}


void dec_alg2(long long int enc_array[], int len)
{
    for (int i=0;i<len;i++)
    {
        int element = enc_array[i];
        for (int i=10; i>=1; i--){
            element = element - i;
            element = reverse(element);
        }
        enc_array[i] = element;
    }
}