#include <iostream> 
#include <iomanip> // for setprecision
#include <string> 

#define PI 3.14159
using namespace std;

void division()
{
	double num1; // at least one of the num should be double
	double num2;
	double division;

	num1 = 36;
	num2 = -7;

	division = num1 / num2;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << fixed;  // fix the precision so it only affects decimal points
	cout << setprecision(2);  // 2 decimal points
	cout << "Division of num1 by num2 is equal to " << division << endl;
}

void radius()
{
	float radius, area;

	cout << "\nEnter radius of circle (in cm): ";
	cin >> radius;

	area = PI * radius * radius;

	cout << fixed;
	cout << setprecision(2);
	cout << "Area of circle: " << area << "cm^2\n" << endl;
}

void weeklyStudyHours()
{
	string name;
	double study_hours;

	cout << "Enter your name: ";
	cin >> name;
	cout << endl;

	cout << "Enter the number of hours you have spent to practice programming per day: ";
	cin >> study_hours;
	cout << endl;

	cout << "Hello, " << name << "! You are spending " << study_hours * 7
		<< " hours to practice programming per week." << endl;
}

int main() 
{
	cout << "*************" << endl;
	cout << "*   Start   *" << endl;
	cout << "*************\n" << endl;

	division();
	radius();
	weeklyStudyHours();

	cout << endl;

	system("PAUSE");
	return 0;
}