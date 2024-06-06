#include <iostream>
#include <cmath>
#include "main.h"
using namespace std;
//constant pi
#define PI 3.14159265358979323846264338327950288419716939937510
//this function calculate the circle area with the formula area=r*r*PI
double calculateCircleArea(double r){
//multiply the constant pi with r squared 
return  PI*(r)*r;

};

int main(){
float radius ;

cin>>radius;//we receive the raduis

cout<<calculateCircleArea(radius)<<endl;



}
