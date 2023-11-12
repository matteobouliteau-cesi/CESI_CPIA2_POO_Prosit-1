using namespace std;                        // To use cout instead of using std::cout

//████████████████████████████████████████████████████████████████████████████████████████████
//███   LIBRARIES                                                                          ███
//████████████████████████████████████████████████████████████████████████████████████████████

#include <iostream>                         // Input/Output operations for the terminal
#include "CoordinateSystem.h"               // Coordinate System class




//████████████████████████████████████████████████████████████████████████████████████████████
//███   MAIN FUNCTION                                                                      ███
//████████████████████████████████████████████████████████████████████████████████████████████

int main()
{
    OrthonormalCoordinateSystem CoordinateSystem;                                    // Creation of an orthonormal coordinate system
    
    PointMovable *PointA = new PointMovable(0, 0);                                  // Creation of the first point with x:0 and y:0 for coordinates
    PointMovable *PointB = new PointMovable(1, 1);                                  // Creation of the second point with x:1 and y:1 for coordinates
    cout << CoordinateSystem.getDistance(PointA, PointB) << "\n";                   // Printing the distance between the both points

    PointB->movePoint(10, 5);                                                       // Moving the second point to 10 units on x and 5 on y
    cout << CoordinateSystem.getDistance(PointA, PointB) << "\n";                   // Printing the new distance between the first and the second point

    delete PointA;                                                                  // Deletion of the first point object
    delete PointB;                                                                  // Deletion of the second point object

    return 0;                                                                       // Return 0
}
