/*! \file CRhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef ISOSCELE_H
#define ISOSCELE_H

#include<iostream>

#include "CTriangolo.h"

using namespace std;

/// @class Isoscele
/// @brief to manage an object with the shape of a isoscele
class Isoscele : public Triangolo
protected:

	float h;
	float b;
	
public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Isoscele();
	Isoscele(float h, float b);
	Isoscele(const Isoscele &r);
	
	~Isoscele();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Isoscele& operator=(const Isoscele &r); 
	bool operator==(const Isoscele &r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Isoscele &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void Seth(float h);
	void Setb(float b);
	void SetDim(float height, float base);
	
	void GetDim(float &height, float &base);
	float Geth();
	float Getb();
	float GetEqualSides();	
	
	float GetArea();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}
		
};

#endif
