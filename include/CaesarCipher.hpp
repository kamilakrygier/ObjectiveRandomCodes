#ifndef CAESARCIPHER_HPP
#define CAESARCIPHER_HPP

class CaesarCipher
{
private:
  int choose;
  std::string sentence;
  int number;
  std::string result;

public:
  CaesarCipher();
  void setParameters(int choose1, std::string sentence1, int number1);
  std::string code();
  std::string getresult();
};

#endif