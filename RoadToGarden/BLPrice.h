//---------------------------------------------------------------------------

#ifndef BLPriceH
#define BLPriceH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TpriceForm : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *trolleybusLEdit;
	TLabeledEdit *busLEdit;
	TLabeledEdit *carLEdit;
	TLabel *trolleybusLabel;
	TLabel *busLabel;
	TCheckBox *chooseFuelCheck;
	TLabel *carLabel;
	TLabel *priceLabel;
	TLabel *priceValueLabel;
	TButton *saveButton;
	TLabel *Label1;
	void __fastcall chooseFuelCheckClick(TObject *Sender);
	void __fastcall saveButtonClick(TObject *Sender);
	void __fastcall trolleybusLEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall busLEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall carLEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormActivate(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TpriceForm(TComponent* Owner);
	float trolleybusPrice, busPrice, carPrice, carExpense;
    bool isOpen;
};
//---------------------------------------------------------------------------
extern PACKAGE TpriceForm *priceForm;
//---------------------------------------------------------------------------
#endif
