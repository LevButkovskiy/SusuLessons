//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "U_start.h"
#include "Unit_F.h"
#include "MyF_sign.h"
#include "U_ban.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
	double X, Y, Z;
	double sign(int X);
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::But_fClickClick(TObject *Sender)
{
    X = StrToFloat(InX->Text);
	Y = StrToFloat(InX->Text);
	Form2->ShowModal();
	delete Form2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::But_zClick(TObject *Sender)
{
	X = StrToFloat(InX->Text);
	Y = StrToFloat(InX->Text);
	Z=((sign(X) * X + (sign(Y) * Y)) * sign(X+Y));
	OutZ->Caption = FloatToStr(Z);

}
//---------------------------------------------------------------------------

double sign(int X){
double signX;
	if(X > 0) signX = -1;
	else if(X = 0) signX = 0;
	else if(X > 0) signX = 1;
	return signX;
}
