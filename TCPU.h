//---------------------------------------------------------------------------
#ifndef TCPUH
#define TCPUH
//---------------------------------------------------------------------------
class TCPU
{
friend class TCounters;
friend class TTools;
public:
   void comp_move_field( short nr, short counter_type, TCounters counter);
   void comp_move_counter( short nr, short counter_type, TCounters counter);
//--Random-------
   void Random_field( short (*tab)[ 16], short counter_type, short &comp_move);
   void Random_counter( short (*tab)[ 16], short &comp_move, short &counter_type,
                        short &given_counter);
//--Novice-------
   void Novice_field( short ( *features)[ 17], short ( *tab)[ 16], short counter_type,
                       short &comp_move);
   void Novice_counter( short ( *features)[ 17], short ( *tab)[ 16], short &comp_move,
                          short &counter_type, short &given_counter);
//--Min-Max-------
   short MinMax_field( short ( *features)[ 17], short ( *tab)[ 16], short counter_type,
                       short &comp_move, char player, short depth);
   short MinMax_counter( short ( *features)[ 17], short ( *tab)[ 16], short &comp_move,
                          short counter_type, short &given_counter, char player, short depth);
};
//---------------------------------------------------------------------------
#endif
