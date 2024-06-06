
#include <cmath>
#include "Area.h"
#include "Constants.h"

// Area functions
float area_square(float l) {
return l*l;
    
}

float area_rectangle(float l, float b) {
return l*b;
    
}

float area_circle(float radius) {
return PI*radius*radius;
    
}

float area_ellipse(float a, float b) {
    return PI*a*b;}
    