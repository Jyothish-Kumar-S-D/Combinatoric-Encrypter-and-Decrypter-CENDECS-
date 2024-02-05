#include <iostream>
#include "functions.h"
#include "algorithms.h"
#include <cstring>
#include <string>
using namespace std;
int character_o;


void alg0_test(){
    long long int ascii_array[] = {90, 96, 97};
    enc_alg0(ascii_array, 3);
    
    cout << "Encoded Array: " << endl;
    for (int e: ascii_array) cout << e << endl;

    cout << endl << "Decoded Array: " << endl;
    dec_alg0(ascii_array, 3);
    for (int e: ascii_array) cout << e << endl;
    
}

void jyothish_test(){
  string text = "really nigga!";
  int* enc_arr = (int *) calloc(text.length(), sizeof(int));

  // converting ti ASCII equivalent array
  for (int i = 0; i < text.length(); i++)
  {
    enc_arr[i] = int(text[i]);
  }

  

  // converting number array to number seperated by " "
  string enc_num_text = "";
  for (int j = 0; j < text.length(); j++)
  {
    // cout << "working :D" << endl;
    enc_num_text.append(to_string(enc_arr[j]) + " ");
  }
  cout << chr_convert(enc_num_text);
}

int main()
{
    // jyothish_test();
    alg0_test();

}