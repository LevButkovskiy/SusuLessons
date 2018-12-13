//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BLCountryTrip.h"
#include "BLPrice.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TcountryTripForm *countryTripForm;
double distance, price, cost;
//---------------------------------------------------------------------------
__fastcall TcountryTripForm::TcountryTripForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TcountryTripForm::distanceEditKeyPress(TObject *Sender, System::WideChar &Key)
{
	switch(Key){
		case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
		return;}
		case ',' :{
			if(Pos(',', (distanceEdit->Text)) !=0){
				Key = 0;
			}
		}
		case(VK_BACK):{
		return;
		}
		case(VK_RETURN):{
		costButton->SetFocus();
		}
		default: Key=0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TcountryTripForm::N1Click(TObject *Sender)
{
	priceForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TcountryTripForm::costButtonClick(TObject *Sender)
{
	distance = StrToFloat(distanceEdit->Text);

	if(CheckBox1->Checked == true){
		cost = price*distance*2;
	}
	else{
		cost = price*distance;
	}
    costLabel->Caption = FloatToStrF(cost, ffCurrency, 6, 2);

}
//---------------------------------------------------------------------------

void __fastcall TcountryTripForm::transportGroupClick(TObject *Sender)
{
	if(transportGroup->ItemIndex == 0){
			priceForm->trolleybusLEdit->Visible = true;
			priceForm->trolleybusLabel->Visible = true;

			priceForm->busLEdit->Visible = false;
			priceForm->busLabel->Visible = false;
			priceForm->carLEdit->Visible = false;
			priceForm->chooseFuelCheck->Visible = false;
			priceForm->Label1->Visible = false;
			priceForm->priceLabel->Visible = false;
			priceForm->priceValueLabel->Visible = false;
			priceForm->carLabel->Visible = false;
			priceForm->ShowModal();
	}
	else if(transportGroup->ItemIndex == 1){
			priceForm->busLEdit->Visible = true;
			priceForm->busLabel->Visible = true;

			priceForm->trolleybusLEdit->Visible = false;
			priceForm->trolleybusLabel->Visible = false;
			priceForm->chooseFuelCheck->Visible = false;
			priceForm->Label1->Visible = false;
			priceForm->priceLabel->Visible = false;
			priceForm->priceValueLabel->Visible = false;
			priceForm->carLabel->Visible = false;
			priceForm->ShowModal();
	}
	else if(transportGroup->ItemIndex == 2){
			priceForm->carLEdit->Visible = true;
			priceForm->chooseFuelCheck->Visible = true;
			priceForm->Label1->Visible = true;
			priceForm->priceLabel->Visible = true;
			priceForm->priceValueLabel->Visible = true;

			priceForm->carLabel->Visible = true;
			priceForm->busLEdit->Visible = false;
			priceForm->busLabel->Visible = false;
			priceForm->trolleybusLEdit->Visible = false;
			priceForm->trolleybusLabel->Visible = false;
			priceForm->ShowModal();
	}
}
//---------------------------------------------------------------------------

