#include <iostream>
#include <cmath> // to use sqrt

const float PI = 3.141592653589793238;

using namespace std;

// Perimeter functions
float peri_square(float l) { // l for length
	return 4 * l;
}

float peri_rectangle(float l, float b) { // b for breadth
	return 2 * (l + b);
}

float peri_circle(float r) { // r for radius
	return 2 * PI * r;
}

float peri_ellipse(float a, float b) {
	float h = ((a - b)*(a - b)) / ((a + b)*(a + b));
	return PI * (a + b) * (1 + ((3 * h) / (10 + sqrt(4 - 3 * h))));
}

// Area functions
float area_square(float l) {
	return l * l;
}

float area_rectangle(float l, float b) {
	return l * b;
}

float area_circle(float r) {
	return PI * r * r;
}

float area_ellipse(float a, float b) {
	return PI * a * b;
}

int main() {
	cout << peri_square(10) << endl;
	cout << peri_rectangle(10,20) << endl;
	cout << peri_circle(10) << endl;
	cout << peri_ellipse(10,20) << endl;
	cout << endl;
	cout << area_square(10) << endl;
	cout << area_rectangle(10,20) << endl;
	cout << area_circle(10) << endl;
	cout << area_ellipse(10,20) << endl;
	return 0;
}
