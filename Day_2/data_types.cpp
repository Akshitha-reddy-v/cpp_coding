#include <iostream>
int main() {
  // int - used to store whole numbers
  int min_num = 5;
  int max_num = 10;
  
  // float - used to store real numbers with decimal point precision of 7.
  // double - used to store real numbers with decimal point precision of 15 to 17.
  float temperature = 35.76438;
  float degrees = 97.55f;    /* 'f' or 'F' at end of a float variable 
                                indicates user that it is a float number expicitly.*/
  double radius = 2.1343565657677;

  // string - used to store sequence of characters
  /* #include <string> is mandatory before declaring a string variable.
     There are 2 styles for declaring a string variable */
  // for style 1 - using namespace std; to be added for includes
  string name = "Elsa";    // style 1 variable declaration
  std::string movie = "Frozen";    // style 2 variable declaration

  // boolean - used to store only 2 values true and false.
  // bool variables when printed prints true as 1 and false as 0.
  bool isTrue = true;
  bool isFalse = false;
  std::cout << "isTrue : " << isTrue << std::endl;  // prints isTrue : 1
  std::cout << "isFalse : " << isFalse << std::endl;  // prints isFalse : 0

  // char - used to store single characters.
  // uses single quotation marks to store characters.
  char letter = 'V';
  char special_char = '@';

  // constant - used to store a constant value which cannot be changed later.
  const int number = 56;
  number = 44;    // results in an error
  
  return 0;
}
