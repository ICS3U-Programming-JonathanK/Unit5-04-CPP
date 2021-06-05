// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: June 5 2021
// This program asks the user for an operator and two numbers to display the
// result of the two numbers and the operator they wihs to use for the numbers

#include <iostream>

int Calculate(char operation, int firstNum, int secNum) {
float result;

  if (operation == '+') {
      result = firstNum + secNum;
    } else if (operation == '-') {
      result = firstNum - secNum;
    } else if (operation == '*') {
      result = firstNum*secNum;
    } else if (operation == '/') {
      result = firstNum/secNum;
    } else if (operation == '%') {
      result = firstNum % secNum == 0;
    } else {
      result = -1;
    }
    return result;
}

int main() {
  int userFirstNum;
  int userSecNum;
  std::string userFirstNumString;
  std::string userSecNumString;
  std::string signString;
  char sign;
  int result;

  std::cout << "This program will perform calculations"
               " between two given numbers" << std::endl;

  // asks the user for an operator to use on the two numbers
  std::cout << "Please type in the math operation you"
               " would like to complete (+, -, *, /, %): ";
  std::cin >> sign;

  result = Calculate(sign, userFirstNum, userSecNum);

  if (sign == '+') {
    std::cout << "Enter first number: ";
    std::cin >> userFirstNumString;

    try {
      userFirstNum = std::stof(userFirstNumString);
      if (userFirstNum <= 0) {
              std::cout << userFirstNum << " is not"
                                           " a positive number"<< std::endl;
          } else {
            std::cout << "Enter second number: ";
            std::cin >> userSecNumString;
            try {
              userSecNum = std::stof(userSecNumString);
              if (userSecNum <= 0) {
                      std::cout << userSecNum << " is not a positive"
                                                 " number"<< std::endl;
              } else {
                result = Calculate(sign, userFirstNum, userSecNum);
                std::cout << "The answer is " << result << std::endl;
              }
            } catch (std::invalid_argument) {
              // The user did not enter an integer.
              std::cout << "\n";
              std::cout << "Please enter a valid number.\n";
            }
          }
    } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "\n";
      std::cout << "Please enter a valid number.\n";
    }

  } else if (sign == '-') {
    std::cout << "Enter first number: ";
    std::cin >> userFirstNumString;

    try {
      userFirstNum = std::stof(userFirstNumString);
      if (userFirstNum <= 0) {
              std::cout << userFirstNum << " is not a positive"
                                           " number"<< std::endl;
          } else {
            std::cout << "Enter second number: ";
            std::cin >> userSecNumString;
            try {
              userSecNum = std::stof(userSecNumString);
              if (userSecNum <= 0) {
                      std::cout << userSecNum << " is not a positive"
                                                 " number"<< std::endl;
              } else {
                result = Calculate(sign, userFirstNum, userSecNum);
                std::cout << "The answer is " << result << std::endl;
              }
            } catch (std::invalid_argument) {
              // The user did not enter an integer.
              std::cout << "\n";
              std::cout << "Please enter a valid number.\n";
            }
          }
    } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "\n";
      std::cout << "Please enter a valid number.\n";
    }
  } else if (sign == '*') {
    std::cout << "Enter first number: ";
    std::cin >> userFirstNumString;

    try {
      userFirstNum = std::stof(userFirstNumString);
      if (userFirstNum <= 0) {
              std::cout << userFirstNum << " is not a positive"
                                           " number"<< std::endl;
          } else {
            std::cout << "Enter second number: ";
            std::cin >> userSecNumString;
            try {
              userSecNum = std::stof(userSecNumString);
              if (userSecNum <= 0) {
                      std::cout << userSecNum << " is not a positive"
                                                 " number"<< std::endl;
              } else {
                result = Calculate(sign, userFirstNum, userSecNum);
                std::cout << "The answer is " << result << std::endl;
              }
            } catch (std::invalid_argument) {
              // The user did not enter an integer.
              std::cout << "\n";
              std::cout << "Please enter a valid number.\n";
            }
          }
    } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "\n";
      std::cout << "Please enter a valid number.\n";
    }
  } else if (sign == '/') {
    std::cout << "Enter first number: ";
    std::cin >> userFirstNumString;

    try {
      userFirstNum = std::stof(userFirstNumString);
      if (userFirstNum <= 0) {
              std::cout << userFirstNum << " is not a positive"
                                           " number"<< std::endl;
          } else {
            std::cout << "Enter second number: ";
            std::cin >> userSecNumString;
            try {
              userSecNum = std::stof(userSecNumString);
              if (userSecNum <= 0) {
                      std::cout << userSecNum << " is not a positive"
                                                 " number"<< std::endl;
              } else {
                std::cout << "The answer is " << result << std::endl;
              }
            } catch (std::invalid_argument) {
              // The user did not enter an integer.
              std::cout << "\n";
              std::cout << "Please enter a valid number.\n";
            }
          }
    } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "\n";
      std::cout << "Please enter a valid number.\n";
    }
  } else if (sign == '%') {
    std::cout << "Enter first number: ";
    std::cin >> userFirstNumString;

    try {
      userFirstNum = std::stoi(userFirstNumString);
      if (userFirstNum <= 0) {
              std::cout << userFirstNum << " is not a positive"
                                           " number"<< std::endl;
          } else {
            std::cout << "Enter second number: ";
            std::cin >> userSecNumString;
            try {
              userSecNum = std::stoi(userSecNumString);
              if (userSecNum <= 0) {
                      std::cout << userSecNum << " is not a positive"
                                                 " number"<< std::endl;
              } else {
                std::cout << "The answer is " << result << std::endl;
              }
            } catch (std::invalid_argument) {
              // The user did not enter an integer.
              std::cout << "\n";
              std::cout << "Please enter a valid number.\n";
            }
          }
    } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "\n";
      std::cout << "Please enter a valid number.\n";
    }
  } else {
    std::cout << "Invalid input" << std::endl;
  }
}
