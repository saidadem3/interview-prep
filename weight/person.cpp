#include "person.h"

Person::Person()
{
    name = "Default";
    age = 0;
    height = 0;
    weight = 0;
}
Person::Person(string name, int age, float weight, int height)
{
    //C needs to know which variable is the one from your arguments and the one that is named in the object
    //if you use the same name use this-> to specify the object's variable
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->height = height;
}

string Person::get_name()
{
    return name;
}

int Person::get_age()
{
    return age;
}

int Person::get_height()
{
    return height;
}

float Person::get_weight()
{
    return weight;
}

void Person::set_name(string name)
{
    this->name = name;
}
void Person::set_age(int age)
{
    this->age = age;
}
void Person::set_weight(float weight)
{
    this->weight = weight;
}
void Person::set_height(int height)
{
    this->height = height;
}

float Person::BMI(int height, float weight)
{
    return 703 * weight / pow(height, 2.0);
}