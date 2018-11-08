//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ActnColorMaps.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TComboBox *CountryFromBox;
	TLabel *LabelOutAbonent;
	TLabel *LabelIncomingAbonent;
	TLabel *LabelFromCountry;
	TLabel *LabelToCountry;
	TComboBox *CountryToBox;
	TLabel *LabelCallTime;
	TEdit *CallTime;
	TLabel *LabelMinutes;
	TComboBox *OperatorFrom;
	TComboBox *OperatorTo;
	TDateTimePicker *DateTimePicker1;
	TLabel *LabelDistanceBetweenCities;
	TEdit *DistanceBetweenCities;
	TLabel *LabelKilometrs;
	TLabel *LabelCost;
	TLabel *Cost;
	TButton *Button1;
	TLabel *LabelPrice;
	TLabel *Price;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TCheckBox *CheckerCountry;
	TLabel *Error1;
	TLabel *Error2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall CheckerCountryClick(TObject *Sender);
	void __fastcall OperatorFromChange(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
