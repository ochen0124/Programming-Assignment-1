#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
  char letter;
  int chose;
  int leftover;
  string revalphabet = "zyxwvutsrqponmlkjihgfedcba"; //reverse alphabet for choice 2
  string together = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABCDEF"; //string of alphabet for choice 3
  cout << "Enter char, operation: ";
  cin >> letter;
  cin >> chose;

  if (isalpha(letter) && chose <4)
  {
    if (chose == 1)
    {
      if (isupper(letter)) //checks if it is uppercase
      {
        letter = tolower(letter); //changes to lowercase
        cout << "Result: "<< letter<<"\n";
      }
      else //it is lowercase
      {
        letter = toupper(letter); //changes to uppercase
        cout << "Result: "<< letter<<"\n";
      }
    }
    if (chose == 2)
    {
      if (isupper(letter)) //checks for uppercase
      {
        leftover = int(letter)-65; //changes the letter to a number and subtracts 65 for uppercase since A = 65
        letter = revalphabet[leftover]; //for example A = 65. 65-65 = 0. We then want the 0'th element in the reverse alphabet which is z
        cout << "Result: "<< letter<<"\n";
      }
      else
      {
        leftover = int(letter)-97; // it is -97 because a = 97
        letter = revalphabet[leftover]; // for example, a = 97, 97-97 = 0. We get z in the reverse alphabet and then we change it to uppercase
        letter = toupper(letter);
        cout << "Result: "<< letter<<"\n";
      }
    }
    if (chose == 3)
    {
      if (isupper(letter))
      {
        leftover = int(letter)-65; //we use the together string of alphabet
        letter = together[leftover+6]; //adding 6 to shift the element 6 ahead to arrive at the desired answer
        cout << "Result: "<< letter<<"\n";
      }
      else
      {
        leftover = int(letter)-97;
        letter = together[leftover+32]; //does the same except for lower case in which we subtract 97 and then add 26+6 elements = 32
        cout << "Result: "<< letter<<"\n";
      }
    }
  }
  else
  {
    cout << "Result: Illegal operation\n"; //checking for illegal inputs and terminates if there is
    return 0;
  }
return 0;
}
