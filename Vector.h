#ifndef Vector_h
#define Vector_h
#include "point.h"

class Vector{
public:
    Vector();
	Vector(Point inicion, Point finaln);

    void setinicio(Point inicion);
	void setfinal(Point finaln);
	Point getinicio();
	Point getfinal();
	void printvector();
	void modifyvector(Point inicion, Point finaln);
private:
    Point inicio;
    Point finale;
};

#endif

