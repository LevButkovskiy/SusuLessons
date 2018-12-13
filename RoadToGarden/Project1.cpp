//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("BLPrice.cpp", priceForm);
USEFORM("BLCountryTrip.cpp", countryTripForm);
USEFORM("BlchooseFuel.cpp", chooseFuelForm);
USEFORM("BLError.cpp", errorForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TcountryTripForm), &countryTripForm);
		Application->CreateForm(__classid(TpriceForm), &priceForm);
		Application->CreateForm(__classid(TchooseFuelForm), &chooseFuelForm);
		Application->CreateForm(__classid(TerrorForm), &errorForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
