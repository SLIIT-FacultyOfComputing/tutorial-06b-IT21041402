#include "Box.h"

void Box::setmeasurements(int h, int l, int w)
{
     height=h;
     length=l;
     width=w;
}
// Implement setters and getters
int Box::getHeight()
{
     return height;
}

int Box::getLength()
{
     return length;
}

int Box::getWidth()
{
    return width;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {

    return length*width*height;
}
