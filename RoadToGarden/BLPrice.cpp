//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BLPrice.h"
#include "BlChooseFuel.h"
#include "BlchooseFuel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TpriceForm *priceForm;
//---------------------------------------------------------------------------
__fastcall TpriceForm::TpriceForm(TComponent* Owner)
	: TForm(Owner)
{
	isOpen = false;
}
//---------------------------------------------------------------------------
void __fastcall TpriceForm::chooseFuelCheckClick(TObject *Sender)
{
	if(chooseFuelCheck->Checked == true){
	chooseFuelForm->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TpriceForm::saveButtonClick(TObject *Sender)
{
	if(StrToFloat(carLEdit->Text) != 0){
		if(priceValueLabel->Caption == "0"){
			if(StrToFloat(priceValueLabel->Caption) == 0){
				chooseFuelForm->ShowModal();
			}
		}
		else{
			trolleybusPrice = StrToFloat(trolleybusLEdit->Text);
			busPrice = StrToFloat(busLEdit->Text);
			carPrice = StrToFloat(carLEdit->Text)*chooseFuelForm->fuelPrice;
			priceForm->Close();
		}
	}
	else{
		trolleybusPrice = StrToFloat(trolleybusLEdit->Text);
		busPrice = StrToFloat(busLEdit->Text);
		priceForm->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TpriceForm::trolleybusLEditKeyPress(TObject *Sender, System::WideChar &Key)
{
    switch(Key){
		case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
		return;}
		case ',' :{
			if(Pos(',', (trolleybusLEdit->Text)) !=0){
				Key = 0;
			}
		}
		case(VK_BACK):{
		return;
		}
		case(VK_RETURN):{
		busLEdit->SetFocus();
		}
		default: Key=0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TpriceForm::busLEditKeyPress(TObject *Sender, System::WideChar &Key)
{
	switch(Key){
		case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
		return;}
		case ',' :{
			if(Pos(',', (busLEdit->Text)) !=0){
				Key = 0;
			}
		}
		case(VK_BACK):{
		return;
		}
		case(VK_RETURN):{
		carLEdit->SetFocus();
		}
		default: Key=0;
	}

}
//---------------------------------------------------------------------------

void __fastcall TpriceForm::carLEditKeyPress(TObject *Sender, System::WideChar &Key)
{
   switch(Key){
		case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
		return;}
		case ',' :{
			if(Pos(',', (carLEdit->Text)) !=0){
				Key = 0;
			}
		}
		case(VK_BACK):{
		return;
		}
		case(VK_RETURN):{
		chooseFuelForm->ShowModal();
		}
		default: Key=0;
	}
}
//---------------------------------------------------------------------------


void __fastcall TpriceForm::FormActivate(TObject *Sender)
{
	isOpen = true;
}
//---------------------------------------------------------------------------

