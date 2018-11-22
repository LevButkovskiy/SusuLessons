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
	TLabel *LabelOutAbonent;
	TLabel *LabelIncomingAbonent;
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
	TLabel *Error1;
	TLabel *Error2;
	TLabel *Label4;
	TLabel *skidkaValue;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall OperatorFromChange(TObject *Sender);
	void __fastcall CallTimeKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall OperatorFromKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall OperatorToKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall DateTimePicker1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Button1KeyPress(TObject *Sender, System::WideChar &Key);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
