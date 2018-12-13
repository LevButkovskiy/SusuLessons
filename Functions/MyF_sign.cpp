//---------------------------------------------------------------------------

#pragma hdrstop

#include "MyF_sign.h
double sign(int X);
//---------------------------------------------------------------------------
#pragma package(smart_init)

double sign(int X){
double signX;
	if(X > 0) signX = -1;
	else if(X = 0) signX = 0;
	else if(X > 0) signX = 1;
	return signX;
}