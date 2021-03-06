﻿//---------------------------------------------------------------------------

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