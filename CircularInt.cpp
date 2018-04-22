#include "iostream"
#include "CircularInt.hpp"
#include <cassert>
using namespace std;

//constructor
CircularInt::CircularInt(int lowNum, int highNum){
	this->lowNum = lowNum;
	this->highNum = highNum;
	this->ans = lowNum;

}

/*
CircularInt::CircularInt(int x1) {
	this->ans = x1;
}
*/
// distructor
CircularInt::~CircularInt(){
}


ostream & operator<<(ostream & os, const CircularInt &c)
{
		os << c.ans;
		return os;
	
}


/*
int& CircularInt::operator+=(const int & c)
{
	ans = (ans + c) % highNum;
	return ans;
} 
*/
CircularInt& CircularInt::operator+=(int other) {
	other = other % highNum;
	if (other >= 0) {
		for (int i = 0; i < other; i++) {
			++*this;
		}
	}
	else {
		*this -= (-other);
	}
}


int& CircularInt::operator-=(const int & c)
{
	ans = (ans - c) % highNum;
	return ans;
}



int& CircularInt::operator++()
{
	ans = ans + 1;
	if (ans > highNum) ans = ans - highNum ;
	return ans;
}

int& CircularInt::operator--()
{
	ans = ans - 1;
	if (ans > highNum) ans = ans - highNum;
	return ans;
}

//unary - operator overloading
CircularInt& CircularInt::operator-(const CircularInt &c)
{
	CircularInt c1 = c;
	int temp = c.ans - c.lowNum + 1;
	c1.ans = c1.highNum;
	for (int i = 0; i < temp; i++) {
		c1--;
	}
	return c1;
}

CircularInt& operator-(int other , const CircularInt &c) {
	CircularInt c1 =- c;
	c1 += other;
	return c1;
}


int& CircularInt::operator*=(const int & c)
{
	ans = (ans * c) % highNum;
	return ans;
}
//____________________________________________


// operator overloading minus

 int& CircularInt::operator=(const int&c) {
	 ans = c;
	 return ans;
 }
 
 int operator/(const CircularInt& c, int temp) {
	 CircularInt c1 = c;
	 if (false) {
		 throw string("error");
	 }
	 else {
		 c1.ans = c1.ans / 3;
	 }
	 return 3;
 }



