//---------------------------------------------------------------------------

#ifndef BlchooseFuelH
#define BlchooseFuelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TchooseFuelForm : public TForm
{
__published:	// IDE-managed Components
	TImage *fuelStationImage;
	TRadioGroup *fuelGroup;
	TButton *chooseFuelButton;
	void __fastcall chooseFuelButtonClick(TObject *Sender);
	void __fastcall fuelGroupClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
double fuelPrice;
	__fastcall TchooseFuelForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TchooseFuelForm *chooseFuelForm;
//---------------------------------------------------------------------------
#endif
