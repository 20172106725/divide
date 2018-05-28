// divide.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int ft, int in);
	void display();
	CFeet add(CFeet & ojbf);
	CFeet operator/(CFeet & ojbf);
};
void CFeet::setvalue(int ft, int in)
{
		feet = ft + in / 12;
		inches = in % 12;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::add(CFeet & ojbf)
{
	CFeet temp;
	temp.setvalue(feet / ojbf.feet, inches / ojbf.inches);
	return temp;
}
CFeet CFeet::operator/(CFeet & ojbf)
{
	CFeet temp;
	temp.setvalue(feet / ojbf.feet, inches / ojbf.inches);
	return temp;
}
int main()
{
	CFeet A, B, C;
	A.setvalue(12,16);
	B.setvalue(2,8);
	C = A / B;
	C.display();
    return 0;
}

