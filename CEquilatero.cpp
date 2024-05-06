/// \file CEquilatero.cpp
///	\brief class Equilatero: implementation of the functions
///
///	Details.
///

#include<iostream> 
#include<cmath>
#include "CEquilatero.h"

/// @brief default constructor 
Equilatero::Equilatero() {

	cout << "Equilatero - constructor - default" << endl;

	Init();

}

/// @brief constructor 
/// @param l lenght of the sides
Equilatero::Equilatero(float l, float b) {

	Init();

	cout << "Equilatero - constructor" << endl;

	if (h <= 0. || l <= 0.) {
		WarningMessage("constructor: height and base should be > 0"); 
		SetDim(0,0);
	}
	else
		SetDim(h,b);

}

/// @brief destructor 
Equilatero::~Equilatero() {

	cout << "Equilatero - destructor" << endl;
	Reset();

}

/// @brief copy constructor 
/// @param o reference to the object that should be copied 
Equilatero::Equilatero(const Equilatero &r) { 

	cout << "Equilatero - copy constructor" << endl;

	Init(r);
	
}

/// @brief overload of operator = 
/// @param o reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Equilatero& Equilatero::operator=(const Equilatero &r) { 

	cout << "Equilatero - operator =" << endl;

	Init(r);
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same height and the same base
bool Equilatero::operator==(const Equilatero &r) { 

	if (r.h == h && r.b == b)
		return true;
		
	return false;
}

/// @brief default initialization of the object
void Rhombus::Init() {
	SetDim(0,0);
	
}


/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rhombus::Init(const Rhombus &r) {
	Init();
	SetDim(r.diagL,r.diagS);
}

/// @brief total reset of the object  
void Equilatero::Reset() {
	
	SetDim(0,0);
	
}


/// @brief set longer diagonal of the object
/// @param h heihght 
void Equilatero::Seth(float h) {

	if (h < 0.) {
		WarningMessage("Seth: height should be > 0");
		return;
	}

	SetDim(h,b);

} 

/// @brief set shorter diagonal of the object
/// @param d diagonal 
void Rhombus::Setb(float b) {

	if (b < 0.) {
		WarningMessage("Setb: base should be > 0");
		return;
	}

	SetDim(h,b);

}


/// @brief get longer height of the object
/// @return longer height
float Equilatero::Geth() {

	return h;

}

/// @brief get shorter diagonal of the object
/// @return shorter diagonal 
float Equilatero::Getb() {

	return b;

}

/// @brief get the two equal sides of the Triangolo Isoscele
/// @return side 
float Equilatero::GetEqualSides() {

	return sqrt(b*b/4. + h*h);

}



/// @brief set the height and base of the object
void Equilatero::SetDim(float height, float base) {

	float side = 0;
	
	h = height;
	b = base;  
	
	side = GetSide();
	Triangolo::SetSides(side,side,side);
	
	return;
}

/// @brief set the height and base of the object
void Equilatero::GetDim(float &height, float &base) {

	height = h;
	base = b; 
	
	return;
}

/// @brief computes the area of the object
/// @return the area 
float Equilatero::GetArea() {
	
	return (height*base/2.);
}


/// @brief write an error message 
/// @param string message to be printed
void Equilatero::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Equilatero --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Equilatero::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Equilatero --";
	cout << string << endl;

}


/// @brief for debugging: all about the object
void Equilatero::Dump() {
	cout << endl;
	cout << "---Equilatero---" << endl; 
	cout << endl;
	
	cout << "Height = " << h << endl;
	cout << "Base = " << b << endl; 
	cout << "Side = " << GetSide() << endl;
	
	Equilatero::Dump();
	
	cout << endl;

}
