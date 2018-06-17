/*
    CH08-320142
    a6 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
		double perimeter() const;
	private:
		double innerradius;
};

#endif
