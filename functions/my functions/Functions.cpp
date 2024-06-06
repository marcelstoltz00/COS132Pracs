#include <iostream>
#include "Perimeter.h"
#include "Area.h"
using namespace std;
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
