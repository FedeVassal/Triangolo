/*! \file CTriangolo.h
	\brief Declaration of the general class Quadrilateral

	Details.
*/


#ifndef TRIANGOLO_H
#define TRIANGOLO_H

#include<iostream>

using namespace std;

/// @class Triangolo
/// @brief an abstract base class for quadrilateral
class Quadrilateral {
protected:

	float sides[3];
	
	void SetSides(float s1, float s2, float s3); 


public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Triangolo();
	Triangolo(const Triangolo &o);
	virtual ~Triangolo();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Triangolo& operator=(const Triangolo &o); 
	bool operator==(const Triangolo &o);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Triangolo &o);							
	void Reset();												
	/// @}

			
	/// @name GETTERS
	/// @{
	float GetPerimeter();
	void GetSides(float &s0, float &s1, float &s2);
	/// @}
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}

};

#endif
