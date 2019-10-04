#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person
{
public:
    //Student();

    void BMI(int height, float weight);
};

#endif