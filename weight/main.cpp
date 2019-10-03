#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main()
{
    Person Said;

    Person Omer("Omer", 27, 230, 6.2);

    cout << Omer.get_name() << " is " << Omer.get_age() << "years old" << endl;

    Said.set_age(25);
    Said.set_name("Said");
    Said.set_height(5.8);
    Said.set_weight(245);

    cout << Said.get_name() << Said.get_height() << Said.get_weight() << Said.get_age() << endl;

    return 0;
}