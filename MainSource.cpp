#include <iostream>
#include <conio.h>
#include <locale.h>
//#include <cstring>
using namespace std;

int In;

class Shape {
private:
	
public:
	int height,width;

};

class Square : public Shape {
public:
	int getS() {
		return height*height;
	}
	int getP() {
		return 4*height;
	}
};

class Rectangle : public Shape {
public:
	int getS() {
		return height*width;
	}
	int getP() {
		return 2*height + 2*width;
	}
};

class Circle : public Shape {
public:
	double getS() {
		return 3.14*height*height;
	}
	double getP() {
		return 2*3.14*height;
	}
};

void main() 
{
	int h,w;
	setlocale(LC_ALL, "RUS");
	Square F1;
	Rectangle F2;
	Circle F3;
	for(int i=0; i<2; i++ ) {
		cout << "Введите высоту: ";
		cin >> h; 
		cout << "Введите ширину: ";
		cin >> w;
		if(h == w) {
			F1.height = h;
			cout << "Площадь квадрата: " << F1.getS() << endl;
			cout << "Периметр квадрата: " << F1.getP() << endl;
		}
		else {
			F2.height = h;
			F2.width = w;
			cout << "Площадь прямоугольника: " << F2.getS() << endl;
			cout << "Периметр прямоугольника: " << F2.getP() << endl;	
		}
	}
	cout << "Введите радиус: ";
	cin >> h; 
	F3.height = h;		
	cout << "Площадь круга: " << F3.getS() << endl;
	cout << "Периметр круга: " << F3.getP() << endl;


	system("pause");
}