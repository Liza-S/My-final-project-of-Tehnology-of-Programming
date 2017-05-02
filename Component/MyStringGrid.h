//---------------------------------------------------------------------------

#ifndef MyStringGridH
#define MyStringGridH
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Classes.hpp>
#include <Controls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class PACKAGE TMyStringGrid1 : public TStringGrid
{
private:
	bool flag;
protected:
public:
		__fastcall TMyStringGrid1::TMyStringGrid1(TComponent* Owner)
       : TStringGrid(Owner)
		{
		}

		DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift)
		{
			if (Key == VK_F11) {
				if (flag == 0) {
					FixedCols = 0;
					FixedRows = 0;
					flag = 1;
				}
				else  {
					FixedCols = 1;
					FixedRows = 1;
					flag = 0;
				}
			 }
		}
__published:
};
//---------------------------------------------------------------------------
#endif
// Построить класс - потомок класса TStringGrid, у объектов которого при нажатии
// клавиши F11 исчезают фиксированные строка и колонка (FixedRow и FixedCol) а
// при повторном нажатии F11 они снова появляются.
