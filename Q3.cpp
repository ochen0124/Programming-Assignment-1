#include <iostream>
#include <string>

using namespace std;
int main()
{
  int num1;
  int num2;
  int rem1;
  int rem2;
  int count;
  cout <<"Enter two number between 0-100: ";
  cin >> num1;
  cin >> num2;

  rem1 = num1%3; // calculates the remainder
  rem2 = num2%3;
  count = 0;

  if (num1 != num2) // if remainder is different hamming distance + 1
  {
    count++;

    if (rem1 == 1 && rem2 == 1) //checks if remainder is the same
    {
      count ++;
    }
    if (rem1 == 2 && rem2 == 2)
    {
      count ++;
    }
    if (rem1 != rem2) //checks that remainder is different, hamming distance + 2
    {
      count = count + 2;
    }
    cout << "Hamming distance between " <<num1<< " and " <<num2<< " when numbers are in ternary format is: " <<count<< endl;
  }
  if (num1 == num2) //if the two numbers are the same then the hamming distance is 0
  {
    cout << "Hamming distance between " <<num1<< " and " <<num2<< " when numbers are in ternary format is: 0" <<endl;
  }
return 0;
}
