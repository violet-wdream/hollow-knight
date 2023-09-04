#ifndef EXAMINATEINPUT_H
#define EXAMINATEINPUT_H
#include<iostream>
using namespace std;

int examinateInput(int range1 ,int range2,int num)
{
	while (num<range1 || num>range2)
	{
		cout << "输入错误，请重新输入: " << endl;
		cin >> num;
	}
	return num;
}
#endif 