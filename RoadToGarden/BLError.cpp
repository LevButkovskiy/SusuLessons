//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BLError.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TerrorForm *errorForm;
//---------------------------------------------------------------------------
__fastcall TerrorForm::TerrorForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TerrorForm::OKButtonClick(TObject *Sender)
{
	errorForm->Close();
}
//---------------------------------------------------------------------------
