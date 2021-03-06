/*
    CH08-320142
    a6 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public virtual Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		double perimeter() const;
	private:
		double radius;
};

#endif
