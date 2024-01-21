#include <iostream>
#include <string>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
using namespace std;
// declaring functions

int reverse(int x)
{
  string number = to_string(x);
  string revnum_ret;
  for (int i = 0; i < number.length(); i++)
  {
    revnum_ret.append(1, number[(number.length() - 1) - i]);
  }
  return stoi(revnum_ret);
}


string chr_convert(string numb_enc)
{
  string chr_enc;
  for (int i = 0; i < numb_enc.length(); i++)
  {
    if (numb_enc[i] == ' ')
    {
      chr_enc.append("~");
    }
    else
    {
      string temp = "";
      string str = temp.append(1, char(33 + numb_enc[i] - '0'));
      chr_enc.append(str);
    }
  }
  return chr_enc;
}


void input_to_array(string message, long long int ASCII_array[])
{

  for (int i = 0; i < message.length(); i++)
  {
    ASCII_array[i] = int(message[i]);
  }
}


void print_enc_message(string message, long long int ASCII_array[])
{
  string enc_num_text = "";
  for (int j = 0; j < message.length(); j++)
  {
    enc_num_text.append(to_string(ASCII_array[j]) + " ");
  }
  cout << chr_convert(enc_num_text);
}


#endif