#include <cmath>

#include "Area.h"
#include "Constants.h"

// Area functions
float area_square(float l) {
	//return area_rectangle(l, l);
	return l*l;
}

float area_rectangle(float l, float b) {
	return l * b;
}

float area_circle(float r) {
	return area_ellipse(r, r);
}

float area_ellipse(float a, float b) {
	return PI * a * b;
}
