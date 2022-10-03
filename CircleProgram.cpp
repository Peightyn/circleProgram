// CircleProgram.cpp 
//Your Name:  Peightyn Boyd
//Date: 8/29/22
//Program Title: CircleProgram
//Program Description: This program calculates the area and circuference of a circle, 
// while using syntax to find the radius.


#include <iostream>
#include <string>

const double PI = 3.14; 

using namespace std; 

int main()
{
//Variable Declaration 
	double area;
	double circumferenceCircle; 
	double radius;

//Program Title and Description for the User
	cout << "Program Title: CircleProgram" << endl;
	cout << "Program Description: This program calculates the area and circuference of a circle," << endl; 
	cout <<	"while using syntax to find the radius." << endl; 
	cout << endl; 

//User Input 
	cout << "Type the radius of the circle in inches (in.) = ";
	cin >> radius; 
	cout << endl; 

//Calculations 
	circumferenceCircle = 2 * PI * radius; 
	area = PI * (radius * radius); 

//Output to the Screen
	cout << "Radius: " << radius << " inches" << endl; 
	cout << "Circumference: " << circumferenceCircle << " inches" << endl; 
	cout << "Area: " << area << " inches squared" << endl; 

return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
