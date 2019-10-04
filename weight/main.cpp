#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void printObject(Person test)
{
    //Print Statements
    cout << test.get_name() << " is " << test.get_height() << "in, weighs " << test.get_weight() << ", and is " << test.get_age()
         << " years old" << endl
         << test.get_name() << "\'s BMI is: " << test.BMI(test.get_height(), test.get_weight()) << endl;
}

int main()
{
    //Test Default Constructor
    Person Said;

    //Test Overloaded Constructor
    Person Omer("Omer", 27, 230, 74);

    //Print namespace of the instance
    cout << Omer.get_name() << " is " << Omer.get_age() << "years old" << endl;

    //Testing Setter Methodssss
    Said.set_age(25);
    Said.set_name("Said");
    Said.set_height(68);
    Said.set_weight(245);

    //Pass Object as a parameter
    printObject(Said);

    Student random;

    //Testing inheritance
    cout << "Random: " << random.get_name() << endl;

    //Polymorphism test with deault values (returns -nan since height and weight are zero)
    printObject(random);

    //Testing Inheritance
    random.set_height(68);
    random.set_weight(180);

    //Polymorphism test after setting values to height and weight
    printObject(random);

    return 0;
}