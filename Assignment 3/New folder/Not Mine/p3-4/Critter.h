/*
    CH08-320142
    a3_p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */
class Critter
{
private:  // data members are private
    string name;
    int hunger;
    int boredom;
    double height;
    double thirst;

    void convert();

public: // business logic methods are public

    // constructor methods
    Critter();
    Critter(const string &name);
    Critter(const string &name, const int &hunger, const int &boredom, const double &height);
    Critter(const string &name, const int &hunger, const int &boredom, const double &height, const double &thirst);

    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double height);
    void setThirst(double thirst);
    // getter method
    int getHunger();
    // service method
    void print();
};
