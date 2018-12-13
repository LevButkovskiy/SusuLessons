//---------------------------------------------------------------------------

#ifndef BLCountryTripH
#define BLCountryTripH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TcountryTripForm : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *transportGroup;
	TCheckBox *CheckBox1;
	TLabel *distanceLabel;
	TEdit *distanceEdit;
	TButton *costButton;
	TMainMenu *menu;
	TMenuItem *N1;
	TLabel *costLabel;
	void __fastcall distanceEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall costButtonClick(TObject *Sender);
	void __fastcall transportGroupClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TcountryTripForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TcountryTripForm *countryTripForm;
//---------------------------------------------------------------------------
#endif
