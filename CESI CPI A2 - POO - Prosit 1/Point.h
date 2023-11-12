//████████████████████████████████████████████████████████████████████████████████████████████
//███   CLASS : Point                                                                      ███
//████████████████████████████████████████████████████████████████████████████████████████████
//███   The class to define a point in an orthonormal coordinate system                    ███
//████████████████████████████████████████████████████████████████████████████████████████████

class Point
{
public :
	Point(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}		// Initialisation of a point

	int getX() const;													// Constant method returning the x coordinate of the point
	int getY() const;													// Constant method returning the y coordinate of the point
	int getZ() const;													// Constant method returning the z coordinate of the point

protected :
	int x;																// Distance from the origin on the x axe
	int y;																// Distance from the origin on the y axe
	int z;																// Distance from the origin on the z axe
};

//████████████████████████████████████████████████████████████████████████████████████████████
//███   CLASS : PointMovable                                                               ███
//████████████████████████████████████████████████████████████████████████████████████████████
//███   The derivated class of Point to manage the translation of a point                  ███
//████████████████████████████████████████████████████████████████████████████████████████████

class PointMovable : public Point
{
public:
	PointMovable(int x = 0, int y = 0, int z = 0);						// Initialisation of a point

	void movePoint(int x, int y = 0, int z = 0);						// Method to translate the point on the x, y (optional) and z (optional) axe(s)
	void movePointX(int x);												// Method to translate the point on the x axe
	void movePointY(int y);												// Method to translate the point on the y axe
	void movePointZ(int z);												// Method to translate the point on the z axe
};

