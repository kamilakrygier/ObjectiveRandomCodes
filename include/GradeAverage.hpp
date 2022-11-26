#ifndef GRADEAVERAGE_HPP
#define GRADEAVERAGE_HPP

class GradeAverage
{
private:
    int choose;
    float average;
public:
    GradeAverage ();
    void setChoose (int chose1);
    void numberOfGrades();
    float averageOfGrades();
    void printAverage();
    void redStripe();
};

#endif