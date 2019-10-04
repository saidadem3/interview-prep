#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Person
{
public:
    //Default constructor
    Person();
    //Overloaded constructor
    Person(string name, int age, float weight, int height);

    string get_name();
    int get_age();
    float get_weight();
    int get_height();

    void set_name(string name);
    void set_age(int age);
    void set_weight(float weight);
    void set_height(int height);

    //imperial calculation --> 703 * weight(lbs) / [height (in)]^2
    //metric calculation --> weight (kg) / [ height (m) ]^2
    //using imperial
    float BMI(int height, float weight);

private:
    string name;
    int age;
    float weight;
    int height;
};

#endif