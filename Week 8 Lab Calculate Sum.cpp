/*
Program name : N/A

Programmer : N/A

Date : 10 / 15-17 / 2023

Version : 1.1

Des: User enters a postive number then subtracts a number
     after each idderation it addes it to a whole pot
     then displays the whole sum.
*/


#include <iostream>

int calculate(int number);

int main() {

  int n;

  std::cout << "Enter a postive number.\n";
  std::cin >> n;
  std::cout << "\n";
  if (n < 1) {
    std::cout << "Please enter a postive number.\n";
    return 1;
  }
  else; {
    std::cout << calculate(n) << std::endl;
  }
  

  return 0;
}


int calculate(int number) {
  int sum = 0;
  for (; number > 0; number--) {
    std::cout << number << ',';
    sum += number;
  }
  std::cout << "\n\nThe sum of all the numbers are: ";
  return sum;
}