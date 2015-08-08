//---------------------------------------------------------------------------
#include <vcl.h>
#include "math.h"
#pragma hdrstop
#include "Counters.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
TCounters::TCounters( TCanvas *Acanvas)
{
   canvas = Acanvas;
}
//---------------------------------------------------------------------------
void TCounters::draw_counter( short type, short x, short y, short size)
{
   switch( type)
   {
   case 1:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Rectangle( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               break;
   case 2:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Rectangle( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   case 3:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Rectangle( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               break;
   case 4:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Rectangle( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   case 5:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Rectangle( x - size / sqrt( 8), y - size / sqrt( 8), x + size / sqrt( 8),
               y + size / sqrt( 8));
               break;
   case 6:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Rectangle( x - size / sqrt( 8), y - size / sqrt( 8),
               x + size / sqrt( 8), y + size / sqrt( 8));
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   case 7:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Rectangle( x - size / sqrt( 8), y - size / sqrt( 8),
               x + size / sqrt( 8), y + size / sqrt( 8));
               break;
   case 8:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Rectangle( x - size / sqrt( 8), y - size / sqrt( 8),
               x + size / sqrt( 8), y + size / sqrt( 8));
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   case 9:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Ellipse( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               break;
   case 10:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Ellipse( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   case 11:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Ellipse( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               break;
   case 12:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Ellipse( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   case 13:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Ellipse( x - size / sqrt( 8), y - size / sqrt( 8), x + size / sqrt( 8),
               y + size / sqrt( 8));
               break;
   case 14:
               canvas -> Pen -> Color = clBlue;
               canvas -> Brush -> Color = clBlue;
               canvas -> Ellipse( x - size / sqrt( 8), y - size / sqrt( 8),
               x + size / sqrt( 8), y + size / sqrt( 8));
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   case 15:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Ellipse( x - size / sqrt( 8), y - size / sqrt( 8),
               x + size / sqrt( 8), y + size / sqrt( 8));
               break;
   case 16:
               canvas -> Pen -> Color = clRed;
               canvas -> Brush -> Color = clRed;
               canvas -> Ellipse( x - size / sqrt( 8), y - size / sqrt( 8),
               x + size / sqrt( 8), y + size / sqrt( 8));
               canvas -> Pen -> Color = clWhite;
               canvas -> Brush -> Color = clWhite;
               canvas -> Ellipse( x - size / sqrt( 16), y - size / sqrt( 16),
               x + size / sqrt( 16), y + size / sqrt( 16));
               break;
   }
}
//---------------------------------------------------------------------------
void TCounters::erase_counter( short x, short y, short size)
{
   canvas -> Pen -> Color = clWhite;
   canvas -> Brush -> Color = clWhite;
   canvas -> Rectangle( x - size / 2, y - size / 2, x + size / 2, y + size / 2);
}
//---------------------------------------------------------------------------
void TCounters::draw_grid( short x, short y, short horiz_rows, short vert_rows, short rect_size)
{
   canvas -> Brush -> Color = clWhite;
   canvas -> Rectangle( x, y, x + rect_size * horiz_rows, y + rect_size * vert_rows);
   canvas -> Pen -> Color = clBlack;
   canvas -> Pen -> Width = 1;
   for( int i = 1 ; i <= vert_rows + 1; i ++)
   {
      canvas -> MoveTo( x, y);
      canvas -> LineTo( x + rect_size * horiz_rows, y );
      y += rect_size;
   }
   y -= rect_size;
   for( int i = 1 ; i <= horiz_rows + 1; i ++)
   {
      canvas -> MoveTo( x, y);
      canvas -> LineTo( x, y - rect_size * vert_rows);
      x += rect_size;
   }
}
//---------------------------------------------------------------------------
