// Type declaration 
/* In c++, once we declare a variable with a data type
   we can only pass values of that data type.
   If we try to pass other type values other than the 
   declared type, it results in an error 
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
  int num = 10;    // declared variable num of type int and assigned value 10.
  num = 5;         // num variable gets updated with the value 5(int)
  num = 4.7;       // Error: can't put a float in an int variable.
  return 0;
}

// Naming Conventions
/* names must start with letter or an underscore
   names can contain only letters,digits and underscores
   names are case-sensitive
   names cannot be c++ keywords(int,string,if,..etc)
   - C++ uses camelcase for varible names(isActive,noOfStudents,..etc)
*/
// Good variable names
int number = 5;
float teamScore = 55.0;
int numberOfTimes = 10;
// Bad variable names
int n = 6;    // short and unclear
int TOTAL_SCORE = 7;    // uppercase is not for regular variables
float num = 5.8;    // short and unclear

// Type Casting - process of converting a value from one data type to other.
/* 2 Types - 1. Implicit Casting(Automatic)
             2. Explicit Casting(Manual)
*/
#include <iostream>
#include <string>
int main() {
  double number = 5.78;
  // casting double to int type implicitly
  int digit = number;
  int digitByFive = number / 5;
  // casting int to float explixitly
  float floatNumber = (float) digit;
  float floatNumberByTwo = (float) digit / 2;
  // int to string
  std::string text1 = to_string(digit);    // text1 holds "5"
  // double to string - string by default considers 6 decimal points of a double variable
  //                    even though there are actually less decimal point numbers in variable.
  std::string text2 = to_string(number);   // text2 holds "5.780000"
  // string to int
  std::string text3 = "abc";
  int text1ToInteger = stoi(text1);
  int text3ToInteger = stoi(text3);  // Error: Invalid characters in string to convert to int.
  // string to double
  double text2ToDouble = stod(text2);
  double text3ToDouble = stod(text3);  // Error: Invalid characters in string to convert to double.
  
  std::cout << "Number : " << number << std::endl;
  std::cout << "Digit : " << digit << std::endl;
  std::cout << "DigitByFive : " << digitByFive << std::endl;
  std::cout << "FloatNumber : " << floatNumber << std::endl;
  std::cout << "FloatNumberByTwo : " << floatNumberByTwo << std::endl;
  std::cout << "Text1 : " << text1 << std::endl;
  std::cout << "Text2 : " << text2 << std::endl;
  std::cout << "Text1ToInteger : " << text1ToInteger << std::endl;
  std::cout << "Text2ToDouble : " << text2ToDouble << std::endl;
  std::cout << "Text3ToInteger : " << text3ToInteger << std::endl;    // thrrows an error
  std::cout << "Text3ToDouble : " << text3ToDouble << std::endl;      // throws an error
  
  return 0;
} 
/*  Output :-
    Number : 5.78
    Digit : 5
    DigitByFive : 1
    FloatNumber : 5
    FloatNumberByTwo : 2.5
*/
