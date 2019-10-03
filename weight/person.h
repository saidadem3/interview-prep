#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    //Default constructor
    Person();
    //Overloaded constructor
    Person(string name, int age, float weight, float height);

    string get_name();
    int get_age();
    float get_weight();
    float get_height();

    void set_name(string name);
    void set_age(int age);
    void set_weight(float weight);
    void set_height(float height);

private:
    string name;
    int age;
    float weight;
    float height;
};

#endif