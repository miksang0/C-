#include<iostream>
using namespace std;
int main() {
	int length, breadth, height, area;
	cout << "Enter Length, Breadth, Height: ";
	cin >> length >> breadth >> height;
	area = length * breadth * height;
	cout << "The area is: " << area;
	return 0;
}