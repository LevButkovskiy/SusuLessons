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
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBox1;
	TLabel *LabelOutAbonent;
	TLabel *LabelIncomingAbonent;
	TLabel *LabelCountry;
	TLabel *Label1;
	TComboBox *ComboBox2;
	TLabel *LabelCallTime;
	TEdit *InputCallTime;
	TLabel *LabelMinutes;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TDateTimePicker *DateTimePicker1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
