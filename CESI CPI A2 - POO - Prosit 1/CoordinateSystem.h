#include "Point.h"


//████████████████████████████████████████████████████████████████████████████████████████████
//███   Interface for a coordinate system										           ███
//████████████████████████████████████████████████████████████████████████████████████████████

class CoordinateSystemInterface
{
public:
	virtual float getDistance(Point* a, Point* b) = 0;			// To get the distance between two points
};





//████████████████████████████████████████████████████████████████████████████████████████████
//███   CLASS : OrthonormalCoordinateSystem										           ███
//████████████████████████████████████████████████████████████████████████████████████████████
//███   The class to make some operations about points on an orthonormal coordinate        ███
//███   system																	           ███
//████████████████████████████████████████████████████████████████████████████████████████████

class OrthonormalCoordinateSystem : public CoordinateSystemInterface
{
public :
	float getDistance(Point *a, Point *b) override;			// To get the distance between two points
};





//████████████████████████████████████████████████████████████████████████████████████████████
//███   CLASS : UnorthonormalCoordinateSystem									           ███
//████████████████████████████████████████████████████████████████████████████████████████████
//███   The class to make some operations about points on an unorthonormal coordinate      ███
//███   system																	           ███
//████████████████████████████████████████████████████████████████████████████████████████████
class UnorthonormalCoordinateSystem : public CoordinateSystemInterface
{
public:
	float getDistance(Point* a, Point* b) override;			// To get the distance between two points
};

