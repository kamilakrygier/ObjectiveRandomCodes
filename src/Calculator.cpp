#include <iostream>
#include "Calculator.hpp"

Calculator::Calculator()
{
  number = 0.f;
  result = 0.f;
  operation = ' ';
}

void Calculator::actions ()
{
  std::cout << "These are the actions You can choose from:\n";
  std::cout << " \n";
  std::cout << " +  addition\n";
  std::cout << " \n";
  std::cout << " -  substraction\n";
  std::cout << " \n";
  std::cout << " *  multiplication\n"; 
  std::cout << " \n";
  std::cout << " /  division\n";
  std::cout << " \n";
}

float Calculator::operationsOfTheCalculator ()
{
  std::cout << "Enter the numbers and actions You would like to perform: ";
  std::cin >> number;
  result = number;
  
  while (operation != '=')
  {
    std::cin >> operation;
    if (operation != '=')
    {
      std::cin >> number;
    }
          
    switch (operation)
    {
      case '+':
      result += number;
      break;
      case '-':
      result -= number;
      break;
      case '*':
      result *= number;
      break;
      case '/':
      result /= number;
      break;
      case '=':
      result;
      break;
      default:
      std::cout << "Sorry, We don't have this kind of action\n";
    }
  }
  return result;
}

void Calculator::result1()
{
  std::cout << "Your result is: " << result << std::endl;
}

int main ()
{
  Calculator calculator = Calculator();
  
  std::cout << "Welcome to calculator!\n";
  std::cout << " " << std::endl;
  
  calculator.actions();
  
  calculator.operationsOfTheCalculator();
  
  calculator.result1();
  
  std::cout << " \n";
  std::cout << "Thank You for using calculator :)\n";
  
  return 0;
}