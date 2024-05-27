#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;

class Calc
{
	double dodavanja(double a, double b)
	{
		return a + b;
	}
	double vidnimanja(double a, double b)
	{
		return a - b;
	}
	double dobutok(double a, double b)
	{
		return a * b;
	}
	double dilenja(double a, double b)
	{
		if (b == 0)
		{
			cout << "Error";
			Sleep(2000);
			return 0;
		}
		return a / b;
	}
public:
	
};

