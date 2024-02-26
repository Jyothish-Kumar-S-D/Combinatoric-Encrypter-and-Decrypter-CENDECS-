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

void convert_chr(string enc_str,long long int val_arr[])
{
  string enc_num = "";
  int len = enc_str.length(),index = 0;
  for (int i=0;i<len;i++)

  {
    if (enc_str[i]!='~')
    {
      enc_num+=to_string((int)enc_str[i]-33);
    }
    else{
      val_arr[index] = stoi(enc_num);
      index++;
      enc_num="";
    }
  }
  val_arr[index] = stoi(enc_num);
  
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

int complement(int num)
{
  int number_of_bits = 0,temp = num;
  
  while(temp>0)  // find number of bits
  {
    temp/=2;
    number_of_bits++;
  }

  return ((1 << number_of_bits)-1) ^ num;

}
int len(int arr[]){
  return sizeof(arr)/sizeof(int);
}



#endif