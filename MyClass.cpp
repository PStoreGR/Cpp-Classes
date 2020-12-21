#include "MyClass.h"


void MyClass::setName(string temp) 
{
	name=temp;
}

void MyClass::setValue(int temp)
{
	value=temp;
}

void MyClass::setAll(string temp1, int temp2)
{
	setName(temp1);
	setValue(temp2);
}

void MyClass::print()
{
	cout<<"Name:"<<getName() <<" and Value:" <<getValue() <<endl;
}

string MyClass::getName()
{
	return name;
}

int MyClass::getValue()
{
	return value;
}
