//---------------------------------------------------------------------------

#ifndef BLErrorH
#define BLErrorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TerrorForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *error1Label;
	TButton *OKButton;
	void __fastcall OKButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TerrorForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TerrorForm *errorForm;
//---------------------------------------------------------------------------
#endif
