#include "Vector3.h"

Vector3 operator+(const Vector3& v1, const Vector3& v2) {
	Vector3 tmp;
	
	tmp.x = v1.x + v2.x;
	tmp.y = v1.y + v2.y;
	tmp.z = v1.z + v2.z;

	return tmp;
}