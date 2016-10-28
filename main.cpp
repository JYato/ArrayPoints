#include <iostream>
#include "point.h"
#include "pointarray.h"
#include "Vector.h"


using namespace std;

int main()
{
    Vector a;
    a.printvector();
    Point *farr;
    PointArray ptr;
    ptr.printpointarray();
    PointArray puntos(farr,5);
    puntos.printpointarray();
    Point nuevo(1.0,2.0);
    puntos.modifypoints(farr,3,nuevo);
    puntos.eliminar(1);
    puntos.printpointarray();

    return 0;
}
//ptr= (int *)malloc(sizeof(int));

