/*
Muhammad Abdullah Ghani
22i-2683
*/
#include<iostream>
#include<string>
#include"22i-2683_A_Q3.h"
int main() {
	Book("Programming", "James", "stri");
	Account(10, 3, 2, 200);
	Book b;
	b.settitle("Calculus");
	b.setisbn("sfsf");
	b.setauthor("Harvard");
	Book c;
	Page p("sd", 23);
	
	c.settitle("HCI");
	c.setisbn("fsdf");
	c.setauthor("Jame");
	librarydatabase l;
	l.add(b);
	l.add(c);
	l.Display(b);
	l.Display(c);
	l.deletebook(c);
	l.Display(c);
	
	librarymanagementsystem obj;
	obj.setname("Abdullah");
	obj.setid(233);
	obj.setpass("sdsf");
	obj.verify("Abdullah", "sdsf", 223);
	
        return 0;
    }
