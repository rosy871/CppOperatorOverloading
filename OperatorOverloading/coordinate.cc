/*
 * coordinate.cc
 *
 *  Created on: 27 Dec 2020
 *      Author: yalam
 */

#include "coordinate.h"
#include <iostream>
using namespace std;

coordinate::coordinate()
{
	x=0;
	y=0;
}

coordinate::coordinate(const int x,const int y):x(x), y(y) {
	// TODO Auto-generated constructor stub

}

void coordinate::setx(const int x)
{
	this->x=x;
}
void coordinate::sety(const int y)
{
	this->y=y;
}

coordinate coordinate::operator+(const coordinate& z2){
	coordinate add;

	add.x=this->x+z2.x;//this x refers to member of coordinate class
	add.y=y+z2.y;
	return add;

}

coordinate coordinate::operator*(const coordinate& z)
{
	return coordinate(this->x*z.x, this->y*z.y);
}

coordinate::~coordinate() {
	// TODO Auto-generated destructor stub
}

void coordinate::showCoordinate()
{
	cout<<"x coordinate : "<<x<<endl;
	cout<<"y coordinate : "<<y<<endl;

}

