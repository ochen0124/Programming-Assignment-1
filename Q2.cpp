#include <iostream>
#include <math.h>

using namespace std;
int main()
{
  int firstx1;
  int firstx2;
  int firsty1;
  int firsty2;
  int firstarea;
  int firstside;
  int secondx1;
  int secondx2;
  int secondy1;
  int secondy2;
  int secondarea;
  int secondside;
  cout <<"Enter the information for the first square\n";
  cout <<"x-coordinate: ";
  cin >> firstx1;
  cout <<"y-coordinate: ";
  cin >> firsty1;
  cout <<"area: ";
  cin >> firstarea;
  firstside = sqrt(firstarea); //calculates the length of one of the sides by using square root of a square
  firstx2 = firstx1 + firstside; //gets the x coord for the other side
  firsty2 = firsty1 - firstside; //gets the y coord for the bottom of the square
  cout <<"Enter the information for the second square\n";
  cout <<"x-coordinate: ";
  cin >> secondx1;
  cout <<"y-coordinate: ";
  cin >> secondy1;
  cout <<"area: ";
  cin >> secondarea;
  secondside = sqrt(secondarea); //does the same to square 2 as it did to square 1
  secondx2 = secondx1 + secondside;
  secondy2 = secondy1 - secondside;

  if ((firstx1 > secondx2 || secondx1 < firstx2)&& (firsty1 > secondy2 || secondy1 > firsty2)) // checks if the squares intersect
  {
    cout <<"THE SQUARES INTERSECT\n"; //outputs results
  }
  else
  {
    cout <<"THE SQUARES DO NOT INTERSECT\n";
  }
  return 0;
}
