//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "U_start.h"
#include "U_F.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;
double X, Y, Z;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
	newInX->Text = Form1->InX->Text;
	newInY->Text = Form1->InY->Text;
	X = StrToFloat(Form1->InX->Text);
	Y = StrToFloat(Form1->InY->Text);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::But1_FClick(TObject *Sender)
{
	Z=((sign(X) + sign(Y))* sign(X+Y));
	OutZ->Caption = FloatToStr(Z);
}
//---------------------------------------------------------------------------

