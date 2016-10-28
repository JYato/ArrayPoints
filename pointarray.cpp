#include <iostream>
#include "point.h"
#include "pointarray.h"
using namespace std;

PointArray::PointArray()
{
    arreglo = new Point[0];
    size1 = 0;
}

PointArray::PointArray(const Point points[], const int sizee)
{
    size1=sizee;
    arreglo = new Point[size1];
    for(int i=0;i<size1;i++){
        arreglo[i] = points[i];
    }
}
PointArray::PointArray(const PointArray &n)
{
    arreglo = n.arreglo;
    size1 = n.size1;
}
void PointArray::append(const Point& nuevo)
{
    int i;
    for( i=0;i<size1;i++) //no puede ir int en esta linea, pero no se el porque
        ;
    arreglo[i]=nuevo;
}
void PointArray::insertar(const int pos, const Point &nuevo)
{
    int i;
    for(i=0;i<pos;i++)
        ;
   arreglo[i]=nuevo;

}
void PointArray::eliminar(const int pos)
{
    int i;
    for(i=0;i<=pos;i++)
        ;
    delete &arreglo[i];
    size1-=1;
}
const int PointArray::getsize()
{
    int i;
    for(i=0;i<size1;i++){
        i++;
    }
    return i;
}
void PointArray::printpointarray()
{
    int i;
    cout << "{";
    for(i=0;i<size1;i++){
        arreglo[i].printpoint();
    }
    cout << "}" << endl;
}

void PointArray::modifypoints(const Point arraay[],const int pos, Point nuevo)
{
    arreglo[pos]=nuevo;
}

void PointArray::limpiar()
{
    delete arreglo;
    size1=0;
}
