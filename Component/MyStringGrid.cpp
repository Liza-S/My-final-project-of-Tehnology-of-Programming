//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "MyStringGrid.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TMyStringGrid1 *)
{
	new TMyStringGrid1(NULL);
}
//---------------------------------------------------------------------------
__fastcall TMyStringGrid1::TMyStringGrid1(TComponent* Owner)
	: TStringGrid(Owner)
{
	flag = 0;
}
//---------------------------------------------------------------------------
void __fastcall TMyStringGrid1::KeyDown(Word &Key, Classes::TShiftState shift)
{
	if (Key == VK_F11) {
		if (flag==0) {

			flag = 1;
		}
	}
}

namespace Mystringgrid
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TMyStringGrid1)};
		RegisterComponents(L"Standard", classes, 0);
	}
}
//---------------------------------------------------------------------------
// Построить класс - потомок класса TStringGrid, у объектов которого при нажатии
// клавиши F11 исчезают фиксированные строка и колонка (FixedRow и FixedCol) а
// при повторном нажатии F11 они снова появляются.