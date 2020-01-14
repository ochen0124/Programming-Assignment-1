#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  string grade;
  int i;
  double sumgpa = 0;
  double avgpa;
    for (i = 1; i <= 5; i++) //goes through 5 classes with for loop
    {
      cout << "Class "<< i << " ";
      cin >> grade;
      if (isalpha(char (grade[0]))) //checks if the grade is a character
      {
        if (grade[0] == 'A') //adds to the sum of the gpa for each grade
        {
          sumgpa = sumgpa + 4.0;
        }
        else if (grade[0] == 'A' && grade[1] == '-')
        {
          sumgpa = sumgpa + 3.7;
        }
        else if (grade[0] == 'B' && grade[1] == '+')
        {
          sumgpa = sumgpa + 3.3;
        }
        else if (grade[0] == 'B' && grade[1] == '-')
        {
          sumgpa = sumgpa + 2.7;
        }
        else if (grade[0] == 'B')
        {
          sumgpa = sumgpa + 3.0;
        }
        else if (grade[0] == 'C' && grade[1] == '+')
        {
          sumgpa = sumgpa + 2.3;
        }
        else if (grade[0] == 'C' && grade[1] == '-')
        {
          sumgpa = sumgpa + 1.7;
        }
        else if(grade[0] == 'C')
        {
          sumgpa = sumgpa + 2.0;
        }
        else if (grade[0] == 'D')
        {
          sumgpa = sumgpa + 1;
        }
        else if (grade[0] == 'F')
        {
          sumgpa = sumgpa;
        }
        else
        {
          cout << "Incorrect input!\n"; //if the input is invalid, it says the message and terminates program
          return 0;
        }
      }
      else
      {
        cout << "Incorrect input!\n"; //if the input is invalid, it says the message and terminates program
        return 0;
      }
    }
    avgpa = sumgpa / 5; //calculates the average by doing sum divided by 5
    cout << "GPA: " << avgpa << ".\n";
    return 0;
}
