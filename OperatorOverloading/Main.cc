#include <iostream>
#include "coordinate.h"

using namespace std;

int main(){
	coordinate c1, c2,c3,c4,c5,c6;

	c1.setx(100);
	c1.sety(20);

	c2.setx(10);
	c2.sety(20);

	c3.setx(15);
	c3.sety(25);


	c4=c1+c2+c3;
	c4.showCoordinate();

	c5=c4;
	c5.showCoordinate();

	c6=c1*c3;
	c6.showCoordinate();
	cout<<"This is using opertor overloading"<<endl;
	cout<<c1;
	cout<<c6;

	return 0;
}
