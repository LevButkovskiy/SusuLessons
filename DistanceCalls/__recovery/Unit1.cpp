//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
	int DistanceValue, timeValue;
	int indexOperatorFrom, indexOperatorTo;
	float priceValue, CostValue;
	float checkPrice(int Distance, int indexOperatorFrom, int timeValue);
	void checkDate(int DateDay, int DateMounth);
	int DateDay, DateMounth;
	int skidka = 0;
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
	DateDay = StrToInt(DateTimePicker1->Date.FormatString("dd"));
	DateMounth = StrToInt(DateTimePicker1->Date.FormatString("mm"));
	checkDate(DateDay, DateMounth);
	DistanceValue = StrToInt(DistanceBetweenCities->Text);
	timeValue = StrToInt(CallTime->Text);
	indexOperatorFrom = OperatorFrom->ItemIndex;
	indexOperatorTo = OperatorTo->ItemIndex;
	if(OperatorFrom->ItemIndex == OperatorTo->ItemIndex && DistanceValue <= 5000 && timeValue <= 60)
		priceValue = 0;
	Price->Caption = FloatToStrF(priceValue, ffCurrency, 6, 2);
	CostValue = checkPrice(DistanceValue, indexOperatorFrom, timeValue);
	Cost->Caption = FloatToStrF(CostValue, ffCurrency, 6, 2);
}

float checkPrice(int Distance, int indexOperatorFrom, int timeValue){
	switch(indexOperatorFrom){
		case 0:                                                             //+Yota
			priceValue = 2.5;
			CostValue = priceValue * timeValue;
		break;
		case 1:                                                             //+MTS
			priceValue = 3;
			CostValue = priceValue * timeValue;
		break;
		case 2:                                                             //+Megafon
			if(timeValue == 1){
				priceValue = 15;
				CostValue = 15;
			}
			else if(timeValue >= 2 && timeValue <= 10){
				priceValue = 0;
				CostValue = 15;
			}
			else if (timeValue >= 11){
				priceValue = 2.5;
				CostValue = 15 + priceValue * (timeValue-11);
			}
			break;
		case 3:                                                             //+BeeLine
			priceValue = 2;
			CostValue = priceValue * timeValue;
		break;
		case 4:                                                             //+Tele2
			priceValue = 3;
			CostValue = priceValue * timeValue;
		break;
		case 5:                                                             //+Rostelekom
			if (Distance <= 100) priceValue = 2.15;
			else if (Distance > 100 && Distance <= 600) priceValue = 3.75;
			else if (Distance > 600 && Distance <= 1200) priceValue = 4.13;
			else if (Distance > 1200 && Distance <= 3000) priceValue = 4.00;
			else if (Distance > 3000 && Distance <= 5000) priceValue = 5.55;
			else if (Distance > 5000) priceValue = 6.15;
			CostValue = priceValue * timeValue;
		break;
	}
	return CostValue;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckerCountryClick(TObject *Sender)
{
	indexOperatorFrom = OperatorFrom->ItemIndex;
	if(indexOperatorFrom == -1){
	CheckerCountry->Checked = false;
	}
	else{
		if(CheckerCountry->Checked && indexOperatorFrom == 5){
			CountryFromBox->Visible = true;
			CountryToBox->Visible = true;
			LabelFromCountry->Visible = true;
			LabelToCountry->Visible = true;

			LabelCallTime->Top = 258; 
			CallTime->Top = 248;
			LabelMinutes->Top = 254;
			CountryToBox->Top = 204;
			CountryFromBox->Top = 204;
			LabelFromCountry->Top = 210;
			LabelToCountry->Top = 210;
			Button1->Top = 302;
			LabelPrice->Top = 356;
			Price->Top = 356;
			LabelCost->Top = 394;
			Cost->Top = 394;
		}
		else if (CheckerCountry->Checked == false && indexOperatorFrom == 5){
			CountryFromBox->Visible = false;
			CountryToBox->Visible = false;
			LabelFromCountry->Visible = false;
			LabelToCountry->Visible = false;

			LabelCallTime->Top = 210;
			CallTime->Top = 200;
			LabelMinutes->Top = 206;
			CountryToBox->Top = 808;
			CountryFromBox->Top = 808;
			LabelFromCountry->Top = 816;
			LabelToCountry->Top = 816;
			Button1->Top = 254;
			LabelPrice->Top = 308;
			Price->Top = 308;
			LabelCost->Top = 346;
			Cost->Top = 346;
		}
		else if (CheckerCountry->Checked == false && indexOperatorFrom != 5){
			CountryFromBox->Visible = false;
			CountryToBox->Visible = false;
			LabelFromCountry->Visible = false;
			LabelToCountry->Visible = false;
			CheckerCountry->Top = 124;
			LabelCallTime->Top = 180;
			CallTime->Top = 170;
			LabelMinutes->Top = 176;
			CountryToBox->Top = 808;
			CountryFromBox->Top = 808;
			LabelFromCountry->Top = 816;
			LabelToCountry->Top = 816;
			Button1->Top = 224;
			LabelPrice->Top = 278;
			Price->Top = 278;
			LabelCost->Top = 316;
			Cost->Top = 316;
		}
		else if (CheckerCountry->Checked && indexOperatorFrom != 5){
			CountryFromBox->Visible = true;
			CountryToBox->Visible = true;
			LabelFromCountry->Visible = true;
			LabelToCountry->Visible = true;
		
			CheckerCountry->Top = 124;
			LabelCallTime->Top = 228;
			CallTime->Top = 218;
			LabelMinutes->Top = 224;
			CountryToBox->Top = 170;
			CountryFromBox->Top = 170;
			LabelFromCountry->Top = 176;
			LabelToCountry->Top = 176;
			Button1->Top = 272;
			LabelPrice->Top = 326;
			Price->Top = 326;
			LabelCost->Top = 364;
			Cost->Top = 364;
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OperatorFromChange(TObject *Sender)
{   
	indexOperatorFrom = OperatorFrom->ItemIndex;
	if(indexOperatorFrom == 0) {
		Image1->Visible = true;
	}
	else{
		Image1->Visible = false;
	}
	CheckerCountry->Checked = false;	
	if(indexOperatorFrom == 5){
		LabelDistanceBetweenCities->Visible = true;
		DistanceBetweenCities->Visible = true;
		LabelKilometrs->Visible = true;

		LabelDistanceBetweenCities->Top = 112;
		DistanceBetweenCities->Top = 108;
		LabelKilometrs->Top = 114;  
						 
		LabelCallTime->Top = 212;
		CallTime->Top = 202;
		LabelMinutes->Top = 208;
		CountryToBox->Top = 808;
		CountryFromBox->Top = 808;
		LabelFromCountry->Top = 816;
		LabelToCountry->Top = 816;
		Button1->Top = 256;
		LabelPrice->Top = 310;
		Price->Top = 310;
		LabelCost->Top = 348;
		Cost->Top = 348;
		CheckerCountry->Top = 156;
	}
	else{
		CheckerCountry->Checked = false;
		LabelDistanceBetweenCities->Visible = false;
		DistanceBetweenCities->Visible = false;
		LabelKilometrs->Visible = false;
		
		CheckerCountry->Top = 108;
		LabelCallTime->Top = 164;
		CallTime->Top = 154;
		LabelMinutes->Top = 160;
		CountryToBox->Top = 170;
		CountryFromBox->Top = 170;
		LabelFromCountry->Top = 176;
		LabelToCountry->Top = 176;
		Button1->Top = 208;
		LabelPrice->Top = 262;
		Price->Top = 262;
		LabelCost->Top = 300;
		Cost->Top = 300;


	}
}
//---------------------------------------------------------------------------

void checkDate(int DateDay, int DateMounth){
	switch(DateMounth){
	case 1:
		if(DateDay > 0 && DateDay < 8){
			skidka = 5;
		}
		break;
	case 2:
		if(DateDay == 23){
			skidka = 5;
		}
		break;
	case 3:
		if(DateDay == 8){
			skidka = 5;
		}
		break;
	case 4:
		if(DateDay == 12){
			skidka = 5;
		}
		break;
	case 5:
		if(DateDay == 1 || DateDay == 9){
			skidka = 5;
		}
		break;
	case 6:
		if(DateDay == 1 || DateDay == 12){
			skidka = 5;
		}
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		if(DateDay == 1){
			skidka = 5;
		}
		break;
	case 10:
		if(DateDay == 5){
			skidka = 5;
		}
		break;
	case 11:
		if(DateDay == 4){
			skidka = 5;
		}
		break;
	case 12:
		if(DateDay == 31){
			skidka = 5;
		}
		break;
	}
}

