//---------------------------------------------------------------------------

#ifndef U_FH
#define U_FH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label3;
	TLabel *Label1;
	TEdit *newInX;
	TLabel *Label2;
	TEdit *newInY;
	TButton *But1_F;
	TButton *But2_nfClick;
	TLabel *OutZ;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall But1_FClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
