/*
    CH08-320142
    a3_p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/


#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
}

void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

void Critter::setBoredom(int boredom)
{
    this->boredom = boredom;
}

void Critter::setHeight(double height)
{
    this->height = height;
}

int Critter::getHunger()
{
    return hunger;
}

Critter::Critter()
{
    name = "critter";
    height = 10.0;
    hunger = 0;
    boredom = 0;

    cout << "Your first object:\n"
    << "Name: " << this->name << endl
    << "Height: " << height << endl
    << "Hunger: " << hunger << endl
    << "Boredom: " << boredom << endl;
}

Critter::Critter(const string &name)
{
    this->name = name;
    height = 10.0;
    hunger = 0;
    boredom = 0;

    cout << "Your second object:\n"
    << "Name: " << this->name << endl
    << "Height: " << height << endl
    << "Hunger: " << hunger << endl
    << "Boredom: " << boredom << endl;
}

Critter::Critter(const string &name, const int &hunger,
const int &boredom, const double &height)
{
    this->name = name;
    this->height = 10.0;
    this->hunger = hunger;
    this->boredom = boredom;

    cout << "Your forth object:\n"
    << "Name: " << this->name << endl
    << "Height: " << height << endl
    << "Hunger: " << hunger << endl
    << "Boredom: " << boredom << endl;
}
