#include <iostream>
#include <iomanip>
using namespace std;

void one();
void two();
void three();
void four();
void five();
void six();

int main()
{
one();
two();
three();
four();
five();
six();

return 0;
}

void one()
{
int A;
bool b;
cout << "A ?"; cin >> A;
cout << boolalpha << (99 < A && A < 999) ? +b : -b;
cout << endl;
}

void two()
{
int A,B,C;
bool b;
cout << "A, B, C ?";
cin >> A >> B >> C;
cout << boolalpha << ((A < 45 && B > 45 && C > 45 )|| (B < 45 && A > 45 && C > 45) || (C < 45 && B > 45 && A > 45)) ? +b : -b;
cout << endl;
}

void three()
{
int A;
bool b;
cout << "A ?";
cin >> A;
cout << boolalpha << (A % 3 != 0 && A % 10 == 0) ? +b : -b;
cout << endl;
}

void four()
{
int A;
bool b;
cout << "A ?"; cin >> A;
cout << boolalpha << (-137 < A && A < -51 || 55 < A && A < 123) ? +b : -b;
cout << endl;
}

void five()
{
int X,Y,Z;
bool f;
cout << " X,Y,Z ?"; cin >> X,Y,Z;
bool a = X%5 == 0;
bool b = Y%5 == 0;
bool c = Z%5 == 0;
cout << boolalpha << ((a == 1 && b == 0 && c == 0) ||
                     (a == 0 && b == 1 && c == 0) ||
                     (a == 0 && b == 0 && c == 1)) ? +f : -f;
cout << endl;
}

void six()
{
int X,Y,Z;
bool b;
cout << "X, Y, Z ?"; cin >> X,Y,Z;
cout << boolalpha << (X > 80) || (Y > 80) || (Z > 80) ? +b : -b;
cout << endl;
}
