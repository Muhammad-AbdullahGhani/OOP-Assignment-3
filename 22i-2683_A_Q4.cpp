/*
Muhammad Abdullah Ghani
22i-2683
*/
#include<iostream>
#include<string>
#include"22i-2683_A_Q4.h"
using namespace std;
int main() {
  
    stock s("AAPL", 100, 5000, 150);
    realestate r("New York", "200 sq.m.", 2015, 200000, 250000);
    currency c(10000);

    investor in;
    investor i;
    int index = 0;
    in.addassets(&s);
    in.addassets(&r);
    in.addassets(&c);
    in.remove(&c);
    cout << "Total Value " << in.totalval()<<endl;
    cout << "Total Value " << in.totalval() << endl;
    cout << "Total Value " << in.totalval() << endl;
    cout << "Total Profit " << in.totalprofit() << endl;
    cout << "Total Profit " << in.totalprofit() << endl;
    cout << "Total Profit " << in.totalprofit() << endl;

    in.mostprofitassests();
    in.remove(&s);
	return 0;
}