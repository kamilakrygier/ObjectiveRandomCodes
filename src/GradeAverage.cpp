#include <iostream>
#include <vector>
#include "GradeAverage.hpp"

GradeAverage::GradeAverage ()
{
  choose = 0;
  average = 0.f;
}
void GradeAverage::setChoose (int chose1)
{
  choose = chose1;
}
void GradeAverage::numberOfGrades()
{
  if (choose == 0)  
  {
    std::cout << "Sorry, You have to have grades to calculate the average :(";
  exit(0);
  }
  else if (choose == 1)
  {
    std::cout << "Unfortunately, we cannot calculate an average from one grade :(";
    exit(0);
  }
  else
  {
    std::cout << "You selected the average of " << choose << " grades\n";
  }
}
float GradeAverage::averageOfGrades()
{
  float grade = 0.f;
  float sum = 0.f;
  
  for (int i = 0; i < choose; i++)
  {
    std::cout << "Enter your " << i+1 << " grade: ";
    std::cin >> grade;
      
    sum += grade;
  }
  average = sum / choose;
  return average;
}
void GradeAverage::printAverage()
{
  std::cout << "Your average is: " << average << std::endl;
}
void GradeAverage::redStripe()
{
  if (average >= 4.75)
  {
    std::cout << " \n";
    std::cout << "Congratulations! You earned red stripe this year\n";
  }
  else if (average < 4.75)
  {
    std::cout << " \n";
    std::cout << "You didn't earned red stripe this year. But don't worr! You have many years ahead of You to try again\n";
  }
}
int main()
{
  GradeAverage gradeAverage = GradeAverage();
  std::cout << "Welcome to the program that will calculate the average of your grades!\n";
  std::cout << "Select the number of grades from which You would like to calculate the average: ";
  int choose;
  std::cin >> choose;
  
  gradeAverage.setChoose(choose);
  gradeAverage.numberOfGrades();
  gradeAverage.averageOfGrades();
  gradeAverage.printAverage();
  gradeAverage.redStripe();
  
  return 0;
}