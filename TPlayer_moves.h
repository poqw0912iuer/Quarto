//---------------------------------------------------------------------------
#ifndef TPlayer_movesH
#define TPlayer_movesH
//---------------------------------------------------------------------------
class TPlayer_moves
{
friend class TCounters;
friend class TForm1;
public:
   void chose_counter( int x, int y, bool &action, TCounters counter,
                       short &counter_type,  short (*tab)[ 16]);
   void chose_field( int x, int y, bool &action, TCounters counter,
                       short &counter_type,  short (*tab)[ 16]);
};
//---------------------------------------------------------------------------
#endif
