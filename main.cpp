//Recursion_Bowlby Dec 4, 2019
//Bowlby, David: Dr_T COSC 1437-58001
/*Recursive functions are used to reduce a complex problem to a simpler-to-solve problem. The example below uses Recursion to find the FACTORAL of a Number*/
#include "Input_Validation_Extended.h"
#include <iostream>
using namespace std;

int factorialR(int);

int main() 
{
  int number = 0;
  char Exit = '\0';
  
  do
  {  
    //Ask User for a Number
    cout << "\nPlease Enter a Number and I will ";
    cout << "give you the Factorial of it: " << endl;
    number = validateInt(number);

    //Process the Number using RECURSION and
    //Output to Screen the Results
    cout << "\nThe Factorial of " << number;
    cout << " is " << factorialR(number);

    cout << "\nWould you like to do another ";
    cout << "Factorial ? Press Y for yes ";
    cout << "or N for no: ";
    Exit = validateChar(Exit);
  }while(Exit != 'N' && Exit != 'n');

  cout << "\nHave a Nice Day!!!! " << endl;

  return 0;  
}

//Function Definition

int factorialR(int number)
{
  if(number == 0) //Base
  {
    return 1;
  }
  else
  {  //Keep Repeating this process until the 
    //BASE is reached. The Base stops the RECURSION
    return number * factorialR (number -1);
  }
}