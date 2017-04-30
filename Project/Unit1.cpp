//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "MyStringGrid.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	TMyStringGrid1 myStringGrid1 = new TMyStringGrid1(Form1);
	myStringGrid1->Parent = Form1;
	myStringGrid1->Left = 50;
	myStringGrid1->Top = 50;
	myStringGrid1->RowCount = 5;
	myStringGrid1->ColCount = 5;

}
//---------------------------------------------------------------------------
