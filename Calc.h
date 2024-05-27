#pragma once
#include<iostream>
#include<Windows.h>
#include<conio.h>
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
	void Operator()
	{
		double a, b;
		char ch;
		cout << "¬вед≥ть числа через проб≥л: \t";
		cin >> a >> b;
		cout << "¬вед≥ть оператор: \t";
		ch = _getch();
		switch (ch)
		{
		case '+':system("cls");
			cout << dodavanja(a, b);
			break;
		case '-':system("cls");
			cout << vidnimanja(a, b);
			break;
		case '*':system("cls");
			cout << dobutok(a, b);
			break;
		case '/':system("cls");
			cout << dilenja(a, b);
			break;
		default:
			break;
		}
	}
};

