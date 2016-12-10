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
		cout << "������� ������: ";
		cin >> h; 
		cout << "������� ������: ";
		cin >> w;
		if(h == w) {
			F1.height = h;
			cout << "������� ��������: " << F1.getS() << endl;
			cout << "�������� ��������: " << F1.getP() << endl;
		}
		else {
			F2.height = h;
			F2.width = w;
			cout << "������� ��������������: " << F2.getS() << endl;
			cout << "�������� ��������������: " << F2.getP() << endl;	
		}
	}
	cout << "������� ������: ";
	cin >> h; 
	F3.height = h;		
	cout << "������� �����: " << F3.getS() << endl;
	cout << "�������� �����: " << F3.getP() << endl;


	system("pause");
}