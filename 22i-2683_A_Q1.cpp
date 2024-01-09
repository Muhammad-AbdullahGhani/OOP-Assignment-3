/*
Muhammad Abdullah Ghani
22i-2683
*/
#include<iostream>
#include"22i-2683_A_Q1.h"
using namespace std;
int main() {
	
	float v1 = 3.0, v2 = 2.0, v3 = 5.0, v4 = 6.0;
	float sum = 0;
	float difference = 0;
	float pythagorastheorem = 0;
	cout << "Point P1(3.0,2.0)" << endl;
	cout << "Point P2(6.0,5.0)" << endl;
	pyhtagorastheorem ob;
	

	pyhtagorastheorem obj(3.0,2.0);
	pyhtagorastheorem obj1(6.0, 5.0);
	ob = obj+obj1;
	pyhtagorastheorem p1(3.0, 2.0);
	pyhtagorastheorem p2(6.0, 5.0);
	
	cout << "Sum of p1+p2 " <<ob.getx()<<"," << ob.gety()<<endl;
	ob = p1 - p2;
	cout << "Difference of p1-p2 " <<ob.getx()<<"," << ob.gety()<<endl;
	pyhtagorastheorem py1(3.0, 2.0);
	pyhtagorastheorem py2(6.0, 5.0);
	
	cout << "By using pyhtagoras theorem " << ob.pythotheorem();
	return 0;
}