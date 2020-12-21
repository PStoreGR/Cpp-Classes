#include <iostream>
using namespace std;

#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
	private:
		string name;
		int value;
	public:
		void setName(string);
		void setValue(int);
		void setAll(string, int);
		string getName();
		int getValue();
		void print();
};

#endif
