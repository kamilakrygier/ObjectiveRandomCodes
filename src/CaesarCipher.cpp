#include <iostream>
#include <string>
#include <ctype.h>
#include "CaesarCipher.hpp"

CaesarCipher::CaesarCipher()
{
  choose = 0;
  sentence = "";
  number = 0;
  result = "";
}

void CaesarCipher::setParameters(int choose1, std::string sentence1, int number1)
{
  choose = choose1;
  sentence = sentence1;
  number = number1;
}

std::string CaesarCipher::code()
{
  switch(choose)
  {
    case 0:
    {
      for (int i = 0; i < sentence.size(); i++)
      {
        if (isupper(sentence[i]))
        {
          result += ((sentence[i] - 65) + number) % 26 + 65;
        }
        else if (islower(sentence[i]))
        {
          result += ((sentence[i] - 97) + number) % 26 + 97;
        }
        else if (isdigit(sentence[i]))
        {
          result += ((sentence[i] - 48) + number) % 10 + 48;
        }
        else
        {
          result += sentence[i];
        }
      }
      break;
    }
    case 1:
    {
      for (int i = 0; i < sentence.size(); i++)
      {
        if (isupper(sentence[i]))
        {
          result += ((sentence[i] - 65) - number) % 26 + 65;
        }
        else if (islower(sentence[i]))
        {
          result += ((sentence[i] - 97) - number) % 26 + 97;
        }
        else if (isdigit(sentence[i]))
        {
          result += ((sentence[i] - 48) - number) % 10 + 48;
        }
        else
        {
          result += sentence[i];
        }
      }
      break;
    }
  }
  return result;
}
std::string CaesarCipher::getresult()
{
  return result;
}

int main()
{

  CaesarCipher caesarCipher = CaesarCipher();

  int choose = 0;
  std::string sentence = "";
  int number = 0;
  
  std::cout << "Welcome to the program that code sentences to Caesar Cipher!\n";
  
  std::cout << "Enter  0  if you want to encrypt and  1  if you want to decrypt: ";
  std::cin >> choose;
  std::cin.ignore();
  
  if (choose != 1 && choose != 0) 
  {
    std::cout << "You have choosen the wrong number" << std::endl;
    exit(0);
  }
  
  std::cout << "Write your sentence: ";
  std::getline(std::cin, sentence);
  
  std::cout << "Enter the number that will determine the cipher: ";
  std::cin >> number;

  caesarCipher.setParameters(choose, sentence, number);
  caesarCipher.code();
  
  std::cout << "Your sentence coded: " << caesarCipher.getresult() << std::endl;

  return 0;
}