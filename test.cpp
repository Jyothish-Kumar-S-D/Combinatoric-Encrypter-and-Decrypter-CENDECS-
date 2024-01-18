#include <iostream>
#include <cstring>
using namespace std;
int character_o;

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

int main()
{
  string text = "really nigga!";
  int enc_arr[text.length()];

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