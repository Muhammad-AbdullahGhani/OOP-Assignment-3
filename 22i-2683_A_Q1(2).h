/*
Muhammad Abdullah Ghani
22i-2683
*/
#pragma once
#include<cmath>
class pyhtagorastheorem {
private:
	float x1, y1;
public:
	pyhtagorastheorem() {
		x1 = 0;
		y1 = 0;

	}
	pyhtagorastheorem(float v1, float v2) {
		x1 = v1;
		y1 = v2;
	}

	float setx(float x1) {
		this->x1= x1;

	}
	float sety(float x1) {
		this->y1 = y1;

	}
	float getx() {
		return x1;

	}
	float gety() {
		return y1;

	}
	friend pyhtagorastheorem operator+ (pyhtagorastheorem& p1);
	friend pyhtagorastheorem operator- (pyhtagorastheorem& p1);
	friend float pythotheorem();


};
pyhtagorastheorem operator+ (pyhtagorastheorem& p, pyhtagorastheorem& p1) {
	pyhtagorastheorem pz;
return pyhtagorastheorem(p.getx() + p1.getx(),p.gety() + p1.gety());
	
}

pyhtagorastheorem operator- (pyhtagorastheorem& p,pyhtagorastheorem& p1) {
	pyhtagorastheorem pz;
	return pyhtagorastheorem(p.getx() - p1.getx(), p.gety() - p1.gety());
}
float pythotheorem() {
	pyhtagorastheorem p2;
	pyhtagorastheorem p1;
	float diff1 = p1.x1 - p2.x1;
	float diff2 = p1.y1 - p2.y1;
	float pyth = 0;
	pyth = sqrt(pow(diff1, 2) + pow(diff2, 2));
	return pyth;
}
