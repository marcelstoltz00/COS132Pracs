
#include <cmath>
#include "Perimeter.h"
#include "Constants.h"
// Perimater functions
float peri_square(float l) { // l for length
return peri_rectangle(l,l);
    
}

float peri_rectangle(float l, float b) { // b for breadth
    return 2*(l+b);
}
float peri_circle(float r) { // r for radius
    return  2*PI*r;
}
float peri_ellipse(float a, float b) {
    float h = ((a-b)*(a-b))/((a+b)*(a+b));
  return PI*(a+b)*(1+((3*h)/(10+ sqrt(4-3*h))));
}