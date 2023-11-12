#include "Point.h"

//████████████████████████████████████████████████████████████████████████████████████████████
//███   CLASS : Point                                                                      ███
//████████████████████████████████████████████████████████████████████████████████████████████


// Return x value
int Point::getX() const {
	return x;
}

// Return y value
int Point::getY() const {
	return y;
}

// Return z value
int Point::getZ() const {
	return z;
}





//████████████████████████████████████████████████████████████████████████████████████████████
//███   CLASS : PointMovable                                                               ███
//████████████████████████████████████████████████████████████████████████████████████████████

// Initialisation of a movable point
PointMovable::PointMovable(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

// Translate a point into the plan according to an orthonormal coordinate system
void PointMovable::movePoint(int x, int y, int z) {
	this->x += x;
	this->y += y;
	this->z += z;
}

// Translate a point on the x axe
void PointMovable::movePointX(int x) {
	this->x += x;
}

// Translate a point on the y axe
void PointMovable::movePointY(int y) {
	this->y += y;
}

// Translate a point on the z axe
void PointMovable::movePointZ(int z) {
	this->z += z;
}