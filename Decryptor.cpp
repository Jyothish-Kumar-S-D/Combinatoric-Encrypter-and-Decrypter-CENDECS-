#include <bits/stdc++.h>
using namespace std;
#include "functions.h"
#include "algorithms.h"

int main()
{

  string encrypted, key;
  cout << "Enter the encrypted message: ";
  getline(cin, encrypted);
  cout << "Enter the key to get the decrypted message: ";
  getline(cin, key);
  int enc_arr[] = {}, no_of_characters = 0;

  { // code block to get the encrypted number array
    for (int i = 0; i < encrypted.length(); i++)
    {
      int enc_numb = 0;
      if (encrypted[i] != '~')
      {
        // if the character is not '~', then converting the symbol to number equivalent
        enc_numb = enc_numb * 10 + ((int)encrypted[i]);
      }
      else
      {
        // if characters is '~', then pushing the converted number to array
        enc_arr[no_of_characters] = enc_numb;
        no_of_characters++;
        enc_numb = 0;
      }
      enc_arr[no_of_characters] = enc_numb;
    }
  }

  for (int i = 0; i < key.length(); i++)
  {
    // traversing through the key and decrypting accordingly
    switch (key[i])
    {
    case ('0'):
    {
      dec_alg0(enc_arr);
    }
    case ('1'):
    {
      dec_alg1(enc_arr);
    }
    case ('2'):
    {
      dec_alg2(enc_arr);
    }
    case ('3'):
    {
      dec_alg3(enc_arr);
    }
    case ('4'):
    {
      dec_alg4(enc_arr);
    }
    case ('5'):
    {
      dec_alg5(enc_arr);
    }
    case ('6'):
    {
      dec_alg6(enc_arr);
    }
    case ('7'):
    {
      dec_alg7(enc_arr);
    }
    case ('8'):
    {
      dec_alg8(enc_arr);
    }
    case ('9'):
    {
      dec_alg9(enc_arr);
    }
    case ('A'):
    {
      dec_algA(enc_arr);
    }

    case ('B'):
    {
      dec_algB(enc_arr);
    }
    case ('C'):
    {
      dec_algC(enc_arr);
    }
    case ('D'):
    {
      dec_algD(enc_arr);
    }
    case ('E'):
    {
      dec_algE(enc_arr);
    }
    case ('F'):
    {
      dec_algF(enc_arr);
    }
    }
  }

  //displaying the decrypted message
 
  string decrypted="";
  for(int i=0;i<len(enc_arr);i++){
    decrypted.append(1,char(enc_arr[i]));
  }
  cout<<"Decrypted message is: \n"<<decrypted;


  
}