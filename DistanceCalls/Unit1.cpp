//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Sysutils.hpp";
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
	int DistanceValue, timeValue;
<<<<<<< HEAD
	int indexOperatorFrom, indexOperatorTo;
	int DateDay, DateMounth;
	int skidka;
	float priceValue, costValue;
	float checkPrice(int Distance, int indexOperatorFrom, int timeValue);
	float checkCost(int Distance, int indexOperatorFrom, int timeValue);
	float checkSkidka(int skidka, float priceValue, float costValue);
	double nowDate;
	void checkDate(int DateDay, int DateMounth, double nowDate);
	bool isChecked;
	bool checkError2(int skidka);

=======
	float priceValue, CostValue;
	void switchDistance(int Distance);
>>>>>>> parent of c4be274... Calls 1.1
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	//Обнуление переменных
	DistanceValue = 0;
	timeValue = 0;
	costValue = 0;
	skidka = 0;
	isChecked = false;
	//Получение данных с формы
	nowDate = DateTimePicker1->Date;
	DistanceValue = StrToInt(DistanceBetweenCities->Text);
	timeValue = StrToInt(CallTime->Text);
<<<<<<< HEAD
	indexOperatorFrom = OperatorFrom->ItemIndex;
	indexOperatorTo = OperatorTo->ItemIndex;
	//Сегодняшний день (число)
	DateDay = StrToInt(DateTimePicker1->Date.FormatString("dd"));
	//Сегодняшний месяц (число)
	DateMounth = StrToInt(DateTimePicker1->Date.FormatString("mm"));
	//Рассчет скидки исходя из даты
	checkDate(DateDay, DateMounth, nowDate);
	//Вывод на форму скидки
	skidkaValue->Caption = IntToStr(skidka);
	skidkaValue->Caption = skidkaValue->Caption + " %";
	//Проверка на выбранного оператора
    if(indexOperatorFrom == -1 ||  indexOperatorTo == -1){
			Error1->Visible = true;
	}
	else{
		Error1->Visible = false;
		//Проверка на одинаковые операторы
		if(indexOperatorFrom == indexOperatorTo && DistanceValue <= 5000 && timeValue <= 60){
			priceValue = 0;
			costValue = 0;
		}
		else{
			//Цена звонка и стоимость
			priceValue = checkPrice(DistanceValue, indexOperatorFrom, timeValue);
			costValue = checkCost(DistanceValue, indexOperatorFrom, timeValue);
		}
		//Перерасчет стоимости с учетом скидки
		costValue = checkSkidka(skidka, priceValue, costValue);
		//Вывод скидки на экран
		if (checkError2(skidka)) {
			Error2->Visible = true;
			skidkaValue->Visible = true;
		}
		else{
			Error2->Visible = false;
			skidkaValue->Visible = false;
        }
		//Вывод на форму стоимости и цены звонка
		Price->Caption = FloatToStrF(priceValue, ffCurrency, 6, 2);
		Cost->Caption = FloatToStrF(costValue, ffCurrency, 6, 2);
	}
}

//Функция рассчета стоимости
float checkCost(int Distance, int indexOperatorFrom, int timeValue){
	switch(indexOperatorFrom){
		case 0:                                                                 //+Yota
			priceValue = 2.5;
			costValue = priceValue * timeValue;
		break;
		case 1:                                                                 //+MTS
			priceValue = 3;
			costValue = priceValue * timeValue;
		break;
		case 2:                                                                 //+Megafon
			if(timeValue == 1){
				priceValue = 15;
				costValue = 15;
			}
			else if(timeValue >= 2 && timeValue <= 10){
				priceValue = 0;
				costValue = 15;
			}
			else if (timeValue >= 11){
				priceValue = 2.5;
				costValue = 15 + priceValue * (timeValue-11);
			}
			break;
		case 3:                                                                 //+BeeLine
			priceValue = 2;
			costValue = priceValue * timeValue;
		break;
		case 4:                                                                 //+Tele2
			priceValue = 3;
			costValue = priceValue * timeValue;
		break;
		case 5:                                                                 //+Rostelekom
			if (Distance <= 100) priceValue = 2.15;
			else if (Distance > 100 && Distance <= 600) priceValue = 3.75;
			else if (Distance > 600 && Distance <= 1200) priceValue = 4.13;
			else if (Distance > 1200 && Distance <= 3000) priceValue = 4.00;
			else if (Distance > 3000 && Distance <= 5000) priceValue = 5.55;
			else if (Distance > 5000) priceValue = 6.15;
			costValue = priceValue * timeValue;
		break;
	}
	return costValue;

}
//---------------------------------------------------------------------------
//Рассчет цены (для вывода на форму)
float checkPrice(int Distance, int indexOperatorFrom, int timeValue){
	switch(indexOperatorFrom){
		case 0:                                                                  //+Yota
			priceValue = 2.5;
		break;
		case 1:                                                                  //+MTS
			priceValue = 3;
		break;
		case 2:                                                                  //+Megafon
			if(timeValue == 1){
				priceValue = 15;
			}
			else if(timeValue >= 2 && timeValue <= 10){
				priceValue = 0;
			}
			else if (timeValue >= 11){
				priceValue = 2.5;
			}
			break;
		case 3:                                                                  //+BeeLine
			priceValue = 2;
		break;
		case 4:                                                                  //+Tele2
			priceValue = 3;
		break;
		case 5:                                                                  //+Rostelekom
			if (Distance <= 100) priceValue = 2.15;
			else if (Distance > 100 && Distance <= 600) priceValue = 3.75;
			else if (Distance > 600 && Distance <= 1200) priceValue = 4.13;
			else if (Distance > 1200 && Distance <= 3000) priceValue = 4.00;
			else if (Distance > 3000 && Distance <= 5000) priceValue = 5.55;
			else if (Distance > 5000) priceValue = 6.15;
		break;
	}
	return priceValue;
}
//---------------------------------------------------------------------------
//Изменение позиции элементов
void __fastcall TForm1::OperatorFromChange(TObject *Sender)
{
	//Получение оператора с формы
	indexOperatorFrom = OperatorFrom->ItemIndex;
	//Ростелеком
	if(indexOperatorFrom == 5){
		LabelDistanceBetweenCities->Visible = true;
		DistanceBetweenCities->Visible = true;
		LabelKilometrs->Visible = true;

		Label1->Visible = true;
		Label4->Visible = false;

		LabelDistanceBetweenCities->Top = 124;
		DistanceBetweenCities->Top = 116;
		LabelKilometrs->Top = 124;
						 
		LabelCallTime->Top = 170;
		CallTime->Top = 162;
		LabelMinutes->Top = 170;
		Button1->Top = 208;
	}
	else{
		LabelDistanceBetweenCities->Visible = false;
		DistanceBetweenCities->Visible = false;
		LabelKilometrs->Visible = false;

		Label1->Visible = false;
		Label4->Visible = true;

		LabelCallTime->Top = 116;
		CallTime->Top = 108;
		LabelMinutes->Top = 116;
		Button1->Top = 154;
	}
}
//---------------------------------------------------------------------------
//Рассчет скидки
void checkDate(int DateDay, int DateMounth, double nowDate){
	switch(DateMounth){
	case 1:
		if(DateDay > 0 && DateDay < 8){
			skidka = 7;
		}
		break;
	case 2:
		if(DateDay == 23){
			skidka = 5;
		}
		break;
	case 3:
		if(DateDay == 8){
			skidka = 8;
		}
		break;
	case 4:
		if(DateDay == 12){
			skidka = 12;
		}
		break;
	case 5:
		if(DateDay == 1 || DateDay == 9){
			skidka = 9;
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
			skidka = 7;
		}
		break;
	}
	//Проверка на "выходной день"
	int numberOfDay = DayOfWeek(nowDate);
	if(numberOfDay == 1 || numberOfDay == 7){
		skidka = 5;
	}
}

//-----------------------------------------------------------------------------
//Перерассчет стоимости с учетом скидки
float checkSkidka(int skidka, float priceValue, float costValue){
	if (skidka != 0) {
	  costValue = costValue - costValue * skidka / 100;
	}
	return costValue;
}
//-----------------------------------------------------------------------------
//Проверка есть скидка или нет
bool checkError2(int skidka){
	if (skidka == 0) {
		return false;
	}
	else{
		return true;
	}
}
//-----------------------------------------------------------------------------




void __fastcall TForm1::CallTimeKeyPress(TObject *Sender, System::WideChar &Key)
{
	switch(Key){
		case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
	return;}
	case ',' :{
			Key = 0;
	}
	case(VK_BACK):{
	return;
	}
	case(VK_RETURN):{
		Button1->SetFocus();
	}
	default: Key=0;
=======
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
>>>>>>> parent of c4be274... Calls 1.1
	}
}
//---------------------------------------------------------------------------

<<<<<<< HEAD
void __fastcall TForm1::FormActivate(TObject *Sender)
{
	OperatorFrom->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OperatorFromKeyPress(TObject *Sender, System::WideChar &Key)
{
switch(Key){
	case(VK_RETURN):{
		OperatorTo->SetFocus();
	}
	default: Key=0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OperatorToKeyPress(TObject *Sender, System::WideChar &Key)
{
	switch(Key){
		case(VK_RETURN):{
			DateTimePicker1->SetFocus();
		}
		default: Key=0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DateTimePicker1KeyPress(TObject *Sender, System::WideChar &Key)
{
	switch(Key){
	case(VK_RETURN):{
		CallTime->SetFocus();
	}
	default: Key=0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1KeyPress(TObject *Sender, System::WideChar &Key)
{
	 switch(Key){
	case(VK_RETURN):{
		OperatorFrom->SetFocus();
	}
	default: Key=0;
	}
}
//---------------------------------------------------------------------------

=======
>>>>>>> parent of c4be274... Calls 1.1
