
/*The Combinatoric Encrypter and Decrypter System (CENDECS) takes a dynamic key shared physically and secretly between the users, converts the message to integer array of ASCII character values and runs the array through multiple layers of simple encryption algorithms according to the sequence in the key to get an array of numbers which are then converted digit by digit into string of ASCII characters (output)
 */

// importing headers
#include <iostream>
#include <string.h>
#include <cstring>
#include "functions.h"
#include "algorithms.h"
using namespace std;

//*********************MAIN CODE**************************************
int main()
{
  // inputing key
  string key;
  cout << "Enter the cypher key(8 to 12 characters long composed of hexadecimal characters): ";
  getline(cin, key);

  // inputing message
  string message;
  cout << "Enter message to be encrypted:  ";
  getline(cin, message);
  long int len = message.length();
  long long int *ASCII_array = (long long int *) calloc(len, sizeof(long long int));
  string enc;

  // changing message to int array of ASCII characters

  input_to_array(message, ASCII_array);

  // ENCRYPTING MESSAGE*****

  for (int i = 0; i < key.length(); i++)
  {
    for (int j = 0; j < message.length(); j++)
    {

      switch (key[i])
      {
      case ('0'):
      {
        enc_alg0(ASCII_array, len);
        break;
      }  
      case ('1'):
      {
        enc_alg1(ASCII_array, len);
        break;
      }
      //case ('2'):
      //{
      //  enc_alg2(ASCII_array, len);
      //  break;
      //}
      //case ('3'):
      //{
      //  enc_alg3(ASCII_array, len);
      //  break;
      //}
      //case ('4'):
      //{
      //  enc_alg4(ASCII_array, len);
      //  break;
      //}
      //case ('5'):
      //{
      //  enc_alg5(ASCII_array, len);
      //  break;
      //}
      //case ('6'):
      //{
      //  enc_alg6(ASCII_array, len);
      //  break;
      //}
      //case ('7'):
      //{
      //  enc_alg7(ASCII_array, len);
      //  break;
      //}
      //case ('8'):
      //{
      //  enc_alg8(ASCII_array, len);
      //  break;
      //}
      //case ('9'):
      //{
      //  enc_alg9(ASCII_array, len);
      //  break;
      //}
      //case ('A'):
      //{
      //  enc_algA(ASCII_array, len);
      //  break;
      //}
      //case ('B'):
      //{
      //  enc_algB(ASCII_array, len);
      //  break;
      //}
      //case ('C'):
      //{
      //  enc_algC(ASCII_array, len);
      //  break;
      //}
      //case ('D'):
      //{
      //  enc_algD(ASCII_array, len);
      //  break;
      //}
      //case ('E'):
      //{
      //  enc_algE(ASCII_array, len);
      //  break;
      //}
      //case ('F'):
      //{
      //  enc_algF(ASCII_array, len);
      //  break;
      //}
      }
    }
  }

  // printing encrypted message
  cout << "Encrypted Message: " << endl;
  print_enc_message(message, ASCII_array);
}