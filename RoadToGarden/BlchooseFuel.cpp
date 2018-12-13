//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BlchooseFuel.h"
#include "BLPrice.h"
#include "BLError.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TchooseFuelForm *chooseFuelForm;
//---------------------------------------------------------------------------
__fastcall TchooseFuelForm::TchooseFuelForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TchooseFuelForm::chooseFuelButtonClick(TObject *Sender)
{
	if(fuelPrice == 0){
		errorForm->ShowModal();
	}
	else{
		chooseFuelForm->Close();
		priceForm->priceValueLabel->Caption = FloatToStrF(fuelPrice, ffCurrency, 6, 2);
		priceForm->priceValueLabel->Caption = priceForm->priceValueLabel->Caption + "/литр";
		priceForm->saveButton->SetFocus();
	}
}
//---------------------------------------------------------------------------

void __fastcall TchooseFuelForm::fuelGroupClick(TObject *Sender)
{
  if(fuelGroup->ItemIndex == 0) fuelPrice = 39.6;
  if(fuelGroup->ItemIndex == 1) fuelPrice = 42.6;
  if(fuelGroup->ItemIndex == 2) fuelPrice = 45.5;
  if(fuelGroup->ItemIndex == 3) fuelPrice = 23.6;
  chooseFuelButton->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TchooseFuelForm::FormActivate(TObject *Sender)
{
	fuelGroup->SetFocus();
}
//---------------------------------------------------------------------------

