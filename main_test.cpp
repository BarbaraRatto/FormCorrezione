//---------------------------------------------------------
/**
//    @file		main_test.cpp
//    @brief	test for the program
*/
//---------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#include "polygon.h"
#include "rectangle.h"
#include "rhombus.h"
#include "isoTriangle.h"


int main()
{
	// RECTANGLE-----------------------------------------------------------------------------------------------------------------

	// VARIABLES
	float wa;		// variable for width object a
	float la;		// variable for length object a
	float wb;		// variable for width object b
	float lb;		// variable for length object b

	float A;		// variable for Area 
	float P;		// variable for Perimeter 

	// CONSTRUCTORS
	rectangle objRectA(10, 5);
	rectangle objRectB;
	rectangle objRectE(-3,-5);

	// SETTERS
	objRectB.SetDim(3, 7);
	objRectA.SetWidth(4);
	objRectA.SetLenght(-2);

	// GETTERS
	la = objRectA.GetLenght();
	wa = objRectA.GetWidth();
	objRectB.GetDim(wb, lb);

	A = objRectA.GetArea();
	P = objRectA.GetPerimeter();

	// COPY CONSTRUCTOR
	rectangle objRectC(6, 9);
	rectangle objRectD = objRectC;


	// OPERATOR ==
	if (objRectA == objRectB)
		cout << "Rectangle A has the same size of Rectangle B" << endl;
	else
		cout << "Rectangle A has not the same size of Rectangle B" << endl;

	if (objRectC == objRectD)
		cout << "Rectangle C has the same size of Rectangle D" << endl;
	else
		cout << "Rectangle C has not the same size of Rectangle D" << endl;

	// OPERATOR =
	objRectA = objRectC;

	// DRAW
	objRectA.Draw();
	objRectB.Draw();

	// DUMP
	objRectA.Dump();
	objRectB.Dump();


	// RHOMBUS-------------------------------------------------------------------------------------------------------------------

	// VARIABLES
	float dha;		// variable for horizontal diagonal object a
	float dva;		// variable for vertical diagonal object a
	float dhb;		// variable for horizontal diagonal object b
	float dvb;		// variable for vertical diagonal object b

	float sidea;	// variable for side object a
	float sideb;	// variable for side object b

	float A_rh;		// variable for Area
	float P_rh;		// variable for Perimeter
	float S_rh;		// variable for side

	// CONSTRUCTORS
	rhombus objRhombA(10, 8);
	rhombus objRhombB;
	rhombus objRhombE(-4,-1);

	// SIDE
	sidea = objRhombA.GetSide();

	// SETTERS
	objRhombB.SetDim(3, 7);
	objRhombA.SetDiagH(4);
	objRhombA.SetDiagV(3);

	// GETTERS
	dha = objRhombA.GetDiagH();
	dva = objRhombA.GetDiagV();
	objRhombB.GetDim(dhb, dvb);

	A_rh = objRhombA.GetArea();
	P_rh = objRhombA.GetPerimeter();
	S_rh = objRhombA.GetSide();

	// COPY CONSTRUCTOR
	rhombus objRhombC(6, 9);
	rhombus objRhombD = objRhombC;

	// OPERATOR ==
	if (objRhombA == objRhombB)
		cout << "Rhombus A has the same size of Rhombus B" << endl;
	else
		cout << "Rhombus A has not the same size of Rhombus B" << endl;

	if (objRhombC == objRhombD)
		cout << "Rhombus C has the same size of Rhombus D" << endl;
	else
		cout << "Rhombus C has not the same size of Rhombus D" << endl;

	// OPERATOR =
	objRhombA = objRhombC;

	// DRAW
	objRhombA.Draw();
	objRhombB.Draw();

	// DUMP
	objRhombA.Dump();
	objRhombB.Dump();

	// TRIANGLE------------------------------------------------------------------------------------------------------------------

	// VARIABLES
	float ba;		// variable for base object a
	float ha;		// variable for height object a
	float bb;		// variable for width object b
	float hb;		// variable for height object b

	float sidea_;	// variable for side object a

	float A_t;		// variable for width object a
	float P_t;		// variable for width object a
	float S_t;		// variable for width object a

	// CONSTRUCTORS
	isoTriangle objTriangA(10, 8);
	isoTriangle objTriangB;

	// SIDE
	sidea_ = objTriangA.GetSide();

	// SETTERS
	objTriangB.SetDim(3, 7);
	objTriangA.SetBase(4);
	objTriangA.SetHeight(3);

	// GETTERS
	ba = objTriangA.GetBase();
	ha = objTriangA.GetHeight();
	objTriangB.GetDim(bb, hb);

	A_t = objTriangA.GetArea();
	P_t = objTriangA.GetPerimeter();
	S_t = objTriangA.GetSide();

	// COPY CONSTRUCTOR
	isoTriangle objTriangC(6, 9);
	isoTriangle objTriangD = objTriangC;

	// OPERATOR ==
	if (objTriangA == objTriangB)
		cout << "Triangle A has the same size of Triangle B" << endl;
	else
		cout << "Triangle A has not the same size of Triangle B" << endl;

	if (objTriangC == objTriangD)
		cout << "Triangle C has the same size of Triangle D" << endl;
	else
		cout << "Triangle C has not the same size of Triangle D" << endl;

	// OPERATOR =
	objTriangA = objTriangC;

	// DRAW
	objTriangA.Draw();
	objTriangB.Draw();

	// DUMP
	objTriangA.Dump();
	objTriangB.Dump();


	return 0;

}
