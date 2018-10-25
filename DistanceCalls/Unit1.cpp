//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
	int DistanceValue, timeValue;
	float priceValue, CostValue;
	void switchDistance(int Distance);
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{

	DistanceValue = 0;
	timeValue = 0;
	CostValue = 0;
	DistanceValue = StrToInt(DistanceBetweenCities->Text);
	timeValue = StrToInt(CallTime->Text);
	switchDistance(DistanceValue);
    Price->Caption = FloatToStrF(priceValue, ffCurrency, 6, 2);
	Cost->Caption = FloatToStrF(priceValue*timeValue, ffCurrency, 6, 2);
}

void switchDistance(int Distance){

	switch(Distance){
		if (Distance <= 100) priceValue = 2.15;
		else if (Distance > 100 && Distance <= 600) priceValue = 3.75;
		else if (Distance > 600 && Distance <= 1200) priceValue = 4.13;
		else if (Distance > 1200 && Distance <= 3000) priceValue = 4.00;
		else if (Distance > 3000 && Distance <= 5000) priceValue = 5.55;
		else if (Distance > 5000) priceValue = 6.15;
	}
}
//---------------------------------------------------------------------------

