#include "CTriangolo.h"

/// @brief default constructor 
Triangolo::Triangolo() {

	cout << "Triangolo - constructor - default" << endl;

	Reset();

} 

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Triangolo::Triangolo(const Triangolo &o) {
	
	cout << "Triangolo - copy constructor" << endl;

	Init(o);
}

/// @brief destructor
Triangolo::~Triangolo() {

	cout << "Triangolo - destructor" << endl;
	Reset();

}  


/// @brief sets the value of the four sides 
/// @param s1 side 1 
/// @param s2 side 2 
/// @param s3 side 3
void Triangolo::SetSides(float s1, float s2, float s3) {
	
	sides[0] = s1;
	sides[1] = s2;
	sides[2] = s3;
	
	return;

} 

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Triangolo& Triangolo::operator=(const Triangolo &o) { 

	return *this;
	
}

/// @brief overload of operator == 
/// @param o reference to the object on the right side of the operator 
/// @return always false 
bool Triangolo::operator==(const Triangolo &o) {

	return false;
}


/// @brief default initialization of the object
void Triangolo::Init() {
	sides[0]= sides[1]= sides[2]= 0.;
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Triangolo::Init(const Triangolo &o) {
	Init();
	sides[0] = o.sides[0]; 
	sides[1] = o.sides[1]; 
	sides[2] = o.sides[2]; 
	
}

/// @brief total reset of the object  
void Triangolo::Reset() {
	sides[0]= sides[1]= sides[2]= 0.;
	
}


/// @brief get the perimeter of the object
/// @return perimeter 
float Triangolo::GetPerimeter() {

	return (sides[0]+sides[1]+sides[2]);

} 

/// @brief get the sides of the object 
/// @param s0 side 0 
/// @param s1 side 1
/// @param s2 side 2
void Triangolo::GetSides(float &s0, float &s1, float &s2) {

	s0 = sides[0]; 
	s1 = sides[1];
	s2 = sides[2];

}

/// @brief write an error message 
/// @param string message to be printed
void Triangolo::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Triangolo --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Triangolo::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Triangolo --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Triangolo::Dump() {
	
	cout << endl;
	cout << "Sides = " << sides[0] << "; " << sides[1] << "; " << sides[2] << "; " << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << endl;

}
