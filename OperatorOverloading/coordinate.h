#include <iostream>

#ifndef COORDINATE_H_
#define COORDINATE_H_

class coordinate {
	int x, y;
public:
	coordinate();
	coordinate(const int x,const int y);
	void setx(const int x);
	void sety(const int y);
	virtual ~coordinate();
	coordinate operator+(const coordinate& c);
	coordinate operator*(const coordinate& c);
	void showCoordinate( );
//	friend std::ostream& operator<<(std::ostream& out, const coordinate& c);
	friend std::ostream& operator<<(std::ostream& out, const coordinate& c)
	{
		out << "("<<c.x << ',' <<c.y <<")"<<std::endl;
		return out;
	}

};

#endif /* COORDINATE_H_ */
