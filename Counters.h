//---------------------------------------------------------------------------
#ifndef CountersH
#define CountersH
//---------------------------------------------------------------------------
class TCounters
{
public:
   TCanvas *canvas;
   TCounters( TCanvas *Acanvas);
   void draw_counter( short type, short x, short y, short size);
   void erase_counter( short x, short y, short size);
   void draw_grid( short x, short y, short horiz_rows, short vert_rows, short rect_size);
};
//---------------------------------------------------------------------------
#endif

