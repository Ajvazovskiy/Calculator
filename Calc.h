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
	double Operator()
	{
		double a, b;
		char ch;
		cout << "¬вед≥ть числа через проб≥л";
		cin >> a >> b;
		cout << "¬вед≥ть оператор";
		ch = _getch();
		switch (ch)
		{
		case '+':system("cls");
			dodavanja(a, b);
			break;
		case '-':system("cls");
			vidnimanja(a, b);
			break;
		case '*':system("cls");
			dobutok(a, b);
			break;
		case '/':system("cls");
			dilenja(a, b);
			break;
		default:
			break;
		}
	}
};

