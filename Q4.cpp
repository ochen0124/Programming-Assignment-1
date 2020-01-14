#include <iostream>
#include <string>

using namespace std;

int main()
{
  int howlong;
  int check = 0;
  int i;

  cout << "Enter a number: ";
  string number;
  cin >> number;

  for (i=0; i < number.length(); i++) //gets the length of the number and loops from i to its length
  {
    if (number[i] != number[number.length()-1-i]) //if the i'th element is not equal to the length-i'th element then we add one to count for not being a palindrome
    {
      check = check + 1;
    }
    else //the i'th element is the same as the last element minus i, meaning it is a palindrome
    {
      check = check + 0;
    }
  }

  if (check > 0) //outputs result based on count 
  {
    cout << "The number "<< number <<" is not a palindrome.\n";
  }
  else
  {
    cout << "The number "<< number <<" is a palindrome.\n";
  }
  return 0;
}
