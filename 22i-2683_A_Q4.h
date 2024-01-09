/*
Muhammad Abdullah Ghani
22i-2683
*/
#pragma once
using namespace std;
class stock  {
private:
	string symbol;
	double totalshare;
	double totalcost;
	double currentprice;
public:
	stock(string s, double share, double cost, double price) {
		symbol = s;
		totalshare = share;
		totalcost = cost;
		currentprice = price;
	}
	
	double marketvalue() {
		return totalshare * currentprice;
	}
	double profit() {
		return marketvalue()-totalcost;
	}
};
	class dividendstock  {
	private:
		double dividends;
		string symbol;
		double totalshare;
		double totalcost;
		double currentprice;
	public:
		dividendstock(string s, double share, double c, double price) {
			symbol = s;
			totalshare = share;
			totalcost = c;
			currentprice = price;
		}
		double profit() {
			return dividends + profit();
		}
		double marketvalue() {
			return totalshare * currentprice;
		}

	};
	class realestate  {
	private:
		string location;
		string area;
		int year;
		double totalcost;
		double price;
	public:
		realestate(string l, string a,int y, double cost, double p) {
			location = l;
			area = a;
			year = y;
			totalcost = cost;
			  price=p;
		}
		double getprofit() {
			return totalcost - price;
		}
		double getmarketvalue() {
			return price;
		}
	};
	class currency {
	private :
		double amount;
		
	public:
		currency(double amt) {
			amount = amt;
		}
		double profit() {
			return 0;
		}
		double marketvalue() {
			return amount;
		}


	};
	class investor {
	private:
		stock* s;
		realestate* r;
		currency* c;
		int noofassets;

	public:
		investor() {
			noofassets = 5;
		}

		void addassets(stock *st) {
			s = st;
		}

		void addassets(realestate* r) {
			this->r = r;
		}

		void addassets(currency* c) {
			this->c = c;
		}

		void remove(stock* st) {
			if (s == st) {
				s=NULL;
			}
		}

		void remove(realestate* r) {
			if (this->r==r) {
				r=NULL;
			}
		}

		void remove(currency* c) {
			if (this->c==c) {
				c = NULL;
			}
		}
		

		
		void mostprofitassests() {
		
			if (s->profit()>r->getprofit()&&s->profit()>c->profit()) {
				cout << "Most profitable asset is Stock " << endl;
				return;
			}
			if (s->profit() < r->getprofit() && r->getprofit() > c->profit()) {
				cout << "Most profitable asset is real estate " << endl;
				return;
			}
			if (c->profit() > r->getprofit() && c->profit() > s->profit()) {
				cout << "Most profitable asset is Currency " << endl;
				return;
			}
		}
	};