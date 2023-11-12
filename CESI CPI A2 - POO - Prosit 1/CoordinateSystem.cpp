#include "CoordinateSystem.h"
#include <cmath>

// To get the distance between two points
float OrthonormalCoordinateSystem::getDistance(Point *a, Point *b) {
	return sqrt(pow((a->getX() - b->getX()), 2) + pow((a->getY() - b->getY()), 2) + pow((a->getZ() - b->getZ()), 2));
}

// To get the distance between two points
float UnorthonormalCoordinateSystem::getDistance(Point* a, Point* b) {
	return sqrt(pow(2*(a->getX() - b->getX()), 2) + pow(2*(a->getY() - b->getY()), 2) + pow(2*(a->getZ() - b->getZ()), 2));
}