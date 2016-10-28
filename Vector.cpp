#include "Vector.h"
#include "Point.h"
#include<iostream>
using namespace std;

Vector::Vector(){
	inicio.modifypoint(0.0, 0.0);
	finale.modifypoint(0.0, 0.0);
}

Vector::Vector(Point inicion, Point finaln)
{
	inicio = inicion; finale = finaln;
}


void Vector::setinicio(Point inicion)
{
	inicio = inicion;
}

void Vector::setfinal(Point finaln)
{
	finale = finaln;
}

Point Vector::getinicio()
{
	return inicio;
}

Point Vector::getfinal()
{
	return finale;
}

void Vector::printvector()
{
	inicio.printpoint(); cout <<  "->" ;
    finale.printpoint(); cout << endl;
}

void Vector::modifyvector(Point inicion, Point finaln)
{
	inicio = inicion;
	finale = finaln;
}
