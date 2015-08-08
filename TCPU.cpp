//---------------------------------------------------------------------------
#include <vcl.h>
#include "math.h"
#pragma hdrstop
#include "TCPU.h"
#include "Counters.h"
#include "TTools.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
void TCPU::comp_move_field( short nr, short counter_type, TCounters counter)
{
   switch( nr)
   {
   case 0:   counter.draw_counter( counter_type, 165 + 25, 5 + 25, 40); break;
   case 1:   counter.draw_counter( counter_type, 165 + 25, 55 + 25, 40); break;
   case 2:   counter.draw_counter( counter_type, 165 + 25, 105 + 25, 40); break;
   case 3:   counter.draw_counter( counter_type, 165 + 25, 155 + 25, 40); break;
   case 4:   counter.draw_counter( counter_type, 215 + 25, 5 + 25, 40); break;
   case 5:   counter.draw_counter( counter_type, 215 + 25, 55 + 25, 40); break;
   case 6:   counter.draw_counter( counter_type, 215 + 25, 105 + 25, 40); break;
   case 7:   counter.draw_counter( counter_type, 215 + 25, 155 + 25, 40); break;
   case 8:   counter.draw_counter( counter_type, 265 + 25, 5 + 25, 40); break;
   case 9:   counter.draw_counter( counter_type, 265 + 25, 55 + 25, 40); break;
   case 10:   counter.draw_counter( counter_type, 265 + 25, 105 + 25, 40); break;
   case 11:   counter.draw_counter( counter_type, 265 + 25, 155 + 25, 40); break;
   case 12:   counter.draw_counter( counter_type, 315 + 25, 5 + 25, 40); break;
   case 13:   counter.draw_counter( counter_type, 315 + 25, 55 + 25, 40); break;
   case 14:   counter.draw_counter( counter_type, 315 + 25, 105 + 25, 40); break;
   case 15:   counter.draw_counter( counter_type, 315 + 25, 155 + 25, 40); break;
   }
}
//---------------------------------------------------------------------------
void TCPU::comp_move_counter( short nr, short counter_type, TCounters counter)
{
   switch( nr)
   {
   case 0:   counter.erase_counter( 30, 30, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 1:   counter.erase_counter( 30, 80, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 2:   counter.erase_counter( 30, 130, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 3:   counter.erase_counter( 30, 180, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 4:   counter.erase_counter( 30, 230, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 5:   counter.erase_counter( 30, 280, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 6:   counter.erase_counter( 30, 330, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 7:   counter.erase_counter( 30, 380, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 8:   counter.erase_counter( 80, 30, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 9:   counter.erase_counter( 80, 80, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
             counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 10:   counter.erase_counter( 80, 130, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
              counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 11:   counter.erase_counter( 80, 180, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
              counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 12:   counter.erase_counter( 80, 230, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
              counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 13:   counter.erase_counter( 80, 280, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
              counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 14:   counter.erase_counter( 80, 330, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
              counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   case 15:   counter.erase_counter( 80, 380, 40); counter.erase_counter( 110 + 25, 80 + 25, 40);
              counter.draw_counter( counter_type, 110 + 25, 80 + 25, 40); break;
   }
}
//---------------------------------------------------------------------------
void TCPU::Random_field( short (*tab)[ 16], short counter_type, short &comp_move)
{
   short variety = 0;
   short *temp;
   for( int i = 0; i < 16; i ++)
      if( tab[ 1][ i] == 0)
         variety += 1;
   temp = new short[ variety];
   short j = 0;
   for( short i = 0; i < 16; i ++)
   {
      if( tab[ 1][ i] == 0)
      {
         temp[ j] = i;
         j += 1;
      }
   }
   comp_move = temp[ random(variety)];
   tab[ 1][ comp_move] = counter_type;
}
//---------------------------------------------------------------------------
void TCPU::Random_counter( short (*tab)[ 16], short &comp_move, short &counter_type,
                           short &given_counter)
{
   short variety = 0;
   short *temp;
   for( int i = 0; i < 16; i ++)
      if( tab[ 0][ i] != 0)
         variety += 1;
   temp = new short[ variety];
   short j = 0;
   for( short i = 0; i < 16; i ++)
   {
      if( tab[ 0][ i] != 0)
      {
         temp[ j] = i;
         j += 1;
      }
   }
   comp_move = temp[ random(variety)];
   counter_type = tab[ 0][ comp_move];
   given_counter = counter_type;
   tab[ 0][ comp_move] = 0;
}
//---------------------------------------------------------------------------
void TCPU::Novice_field( short ( *features)[ 17], short ( *tab)[ 16], short counter_type,
                         short &comp_move)
{
   TTools T;
   short i = 0;
   do{
      if( tab[ 1][ i] == 0)
      {
         tab[ 1][ i] = counter_type;
         if( T.check_if_win( features, tab, 0) == true || T.check_if_win( features, tab, 1) == true)
         {
            comp_move = i;
            return;
         }
         else
         {
            tab[ 1][ i] = 0;
            i += 1;
         }
      }
      else i += 1;
   }while( i < 16);
   Random_field( tab, counter_type, comp_move);
}
//---------------------------------------------------------------------------
void TCPU::Novice_counter( short ( *features)[ 17], short ( *tab)[ 16], short &comp_move,
                           short &counter_type, short &given_counter)   //POPRAW!!!
{
   TTools T;
   short i = 0;
   short counter;
   do{
      if( tab[ 0][ i] != 0)
      {
         counter = tab[ 0][ i];
         if( T.check_if_win2( features, tab, 0, counter) == false &&
         T.check_if_win2( features, tab, 1, counter) == false)
         {
            comp_move = i;
            counter_type = tab[ 0][ comp_move];
            given_counter = counter_type;
            tab[ 0][ comp_move] = 0;
            return;
         }
         else
            i += 1;
      }
      else i += 1;
   }while( i < 16);
   Random_counter( tab, comp_move, counter_type, given_counter);
}
//---------------------------------------------------------------------------
short TCPU::MinMax_field( short ( *features)[ 17], short ( *tab)[ 16], short counter_type,
                          short &comp_move, char player, short depth)
{

}
//---------------------------------------------------------------------------
short TCPU::MinMax_counter( short ( *features)[ 17], short ( *tab)[ 16], short &comp_move,
                          short counter_type, short &given_counter, char player, short depth)
{

}
//---------------------------------------------------------------------------
