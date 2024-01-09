/*
Muhammad Abdullah Ghani
22i-2683
*/
#pragma once
using namespace std;
class Book {
	string title;
	string author;
	string ISBN;
	//librarymanagementsystem *l;
	int date;
	
public:
	Book() {
		title = "";
		author = "";
		ISBN = "";
		date = 12;
	}
	Book(string t, string a, string isbn) {
		title = t;
		author = a;
		ISBN = isbn;
	}
	void settitle(string title) {
		this->title = title;
	}
	void setauthor(string a) {
		author = a;
	}
	void setisbn(string isbn) {
		ISBN = isbn;

	}
	string gettitle() {
		return title;
	}
	string getauthor() {
		return author;
	}
	string getisbn() {
		return ISBN;
	}
	void showduedate() {
		cout << "Due date to return the book is" << date << "Dec" << "2023" << endl;
	}
	bool reservationstatus(string res) {
		if (res == gettitle()) {
			cout << "Book is reserved";
			return true;
		}
		else {
			return false;
		}
	}
	string bookrequest(string t) {
		if (title == t) {
			cout << "Books is available" << endl;
			cout << "Book reserved" << endl;
		}
	}
	/*void renewinfo() {
		if (l.searchbooks(title,author,ISBN)) {
			cout << "You need to renew book on " << date<<endl;

		}
		else {
			cout << "Book not found" << endl;
		}
	}*/
};
class Page {
	string text;
	int pageno;
	Book* b;
public:
	
	Page(string txt, int no) {
		text = txt;
		pageno = no;
	}
	void settext(string t) {
		text = t;
	}
	void setpageno(int no) {
		pageno = no;
	}
	int getno() {
		return pageno;
	}
	string gettext() {
		
		return text;
	}
	void bookstatus() {
		b->showduedate();
		b->reservationstatus("Programming");
	}
	
};
class Account {
	int noofbooksborrwed;
	int nooflostbooks;
	int reservedbooks;
	float fineamount;
public:
	Account(int b, int l, int r, float amt) {
		noofbooksborrwed = b;
		nooflostbooks = l;
		reservedbooks = r;
		fineamount = amt;
	}
	void setborrowed(int b) {
		noofbooksborrwed = b;

	}
	void setlostbooks(int l) {
		nooflostbooks = l;

	}
	void setreservedbooks(int r) {
		reservedbooks = r;
	}
	void fine(float amt) {
		fineamount = amt;
	}
	
};
class librarydatabase {
	Book listofbooks;
	Book arr[10];
	int noofbooks;
public:
	librarydatabase() {
		noofbooks = 0;
	};
	void add(Book l) {
		if (noofbooks <= 10) {
			arr[noofbooks] = l;
			noofbooks++;
		}
	}
	void deletebook(Book l) {
		for (int i = 0; i < 10; i++) {
			if (l.gettitle() == arr[i].gettitle()) {
				arr[i] = arr[i + 1];
				noofbooks--;
				return;
			}
			else {
				cout << "Book not found";
				return;
			}
			

		}
		
		
	}
	void Display(Book b) {
		cout << "Book title " << b.gettitle()<<endl;
		cout << "Book Author " << b.getauthor()<<endl;
		cout << "Book isbn " << b.getisbn()<<endl;
	}
	void search(Book l) {
		if (listofbooks.getauthor() == l.getauthor()||listofbooks.gettitle()==l.gettitle()) {
			cout << "Book found" << endl;
			return;
		}
		else {
			cout << "Book not found" << endl;
			return;
		}
	}

};
class librarian {
private:
	string name;
	int ID;
	string password;
	Book* b;
	librarydatabase* lib;
public:
	librarian(string n, int id, string pass) {
		name = n;
		ID = id;
		password = pass;
		
	}
	void setname(string n) {
		name = n;
	}
	void setid(int ID) {
		this->ID = ID;
	}
	int getid() {
		return ID;
	}
	string getname() {
		return name;
	}
	bool verifylibrarian(string n,int id,string pass) {
		if (name == n && ID == id && password == pass) {
			cout << "Librarian verified" << endl;
			return true;
		}
		return false;
	}
	bool searchbooks(string t, string a, string isbn) {
		if (t == b->gettitle() && a == b->getauthor() && isbn == b->getisbn()) {
			cout << "Book found" << endl;
			return true;
		}
		else {
			cout << "Sorry book could not be found" << endl;
			return false;
		}
	}
};
class librarymanagementsystem {
	string name;
	int id;
	string password;
	librarian *l;

	Book b;

public:
	librarymanagementsystem() {
		name = "";
		id = 0;
		password = "";

	}
	librarymanagementsystem(string n, string s, int ID) {
		name = n;
		password = s;
		id = ID;

	}
	void setid(int id) {
		this->id = id;

	}
	void setpass(string pass) {
		password = pass;
	}
	void setname(string n) {
		name = n;
	}
	int getid() {
		return id;
	}
	string getname() {
		return name;
	}
	string getpassword() {
		return password;
	}
	bool verify(string n, string pass, int ID) {

		if (l){
			l->verifylibrarian(name, id, password);
			cout << "Verification complete" << endl;
			return true;
		}
	return false;
	}

	};
class user {
	string name;
	int id;
	user(string n,int i) {
		name = n;
		id = i;
	}
	void setname(string n) {
		name = n;
	}
	void setid(int ID) {
		id = ID;
	}
	int getid() {
		return id;
	}
	string getname() {
		return name;
	}
	
	void verify(string n, int id) {
		if (n == name && this->id == id) {
			cout << "Welcome back" << endl;
		}
		else {
			cout << "Username and id didnot match" << endl;
		}
	}
	void checkaccount(string n, int id) {
		if (n == name && this->id == id) {
			cout << "Account exists" << endl;
		}
		else {
			cout << "No account exists" << endl;
		}
}
	Book b;
	void getbookinfo() {

	}
};
class Student {
private:
	string batch;
	string designation;
public:
	Student(string b, string des) {
		batch = b;
		designation = des;
	}

};