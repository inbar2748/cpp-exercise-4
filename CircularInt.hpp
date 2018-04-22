#include "iostream"
#include "cassert"

using namespace std;

class  CircularInt {

public:

	int lowNum;
	int highNum;
	int ans;

	CircularInt(int lowNum, int highNum);
	~CircularInt();
	friend ostream& operator <<(ostream& os, const CircularInt& c); // output operators
	friend int operator/(const CircularInt & c, int temp);
	//int & operator+=(const int &c);
	CircularInt & operator+=(int other);
	int & operator-=(const int & c);
	int & operator++();
	int & operator--();
	CircularInt & operator-(const CircularInt & c);
	friend CircularInt& operator-(int other, const CircularInt &c);

		//CircularInt(int x1);



		int & operator=(const int &c);

		int & operator*=(const int & c);


	};
	/*
	CircularInt & operator-(const int & c, const CircularInt & h2);

	CircularInt & operator-(const int & c, const CircularInt & h2)
	{
		CircularInt ans{ c , c };
		ans =- h2;
		return ans;

		//return CircularInt(c.ans - h2.ans);
	}

	CircularInt operator-(const CircularInt & c, const CircularInt & h2);

	CircularInt  operator-(const CircularInt & c, const CircularInt & h2)
	{

		return CircularInt(c.ans - h2.ans);
	}

	*/