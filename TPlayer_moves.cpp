//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "TPlayer_moves.h"
#include "Counters.h"
#include "TicTacToe.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
void TPlayer_moves::chose_counter( int X, int Y, bool &action, TCounters counter,
                       short &counter_type,  short (*array)[ 16])
{
   if( X > 5 && X < 55 && Y > 5 && Y < 55 && array[ 0][ 0] != 0)
   {
      counter_type = 1; counter.erase_counter( 30, 30, 40);
      action = ( action == true) ? false : true; array[ 0][ 0] = 0;
   }
   else if( X > 5 && X < 55 && Y > 55 && Y < 105 && array[ 0][ 1] != 0)
   {
      counter_type = 2; counter.erase_counter( 30, 80, 40);
      action = ( action == true) ? false : true; array[ 0][ 1] = 0;
   }
   else if( X > 5 && X < 55 && Y > 105 && Y < 155 && array[ 0][ 2] != 0)
   {
      counter_type = 3; counter.erase_counter( 30, 130, 40);
      action = ( action == true) ? false : true; array[ 0][ 2] = 0;
   }
   else if( X > 5 && X < 55 && Y > 155 && Y < 205 &&  array[ 0][ 3] != 0)
   {
      counter_type = 4; counter.erase_counter( 30, 180, 40);
      action = ( action == true) ? false : true; array[ 0][ 3] = 0;
   }
   else if( X > 5 && X < 55 && Y > 205 && Y < 255 && array[ 0][ 4] != 0)
   {
      counter_type = 5; counter.erase_counter( 30, 230, 40);
      action = ( action == true) ? false : true; array[ 0][ 4] = 0;
   }
   else if( X > 5 && X < 55 && Y > 255 && Y < 305 && array[ 0][ 5] != 0)
   {
      counter_type = 6; counter.erase_counter( 30, 280, 40);
      action = ( action == true) ? false : true; array[ 0][ 5] = 0;
   }
   else if( X > 5 && X < 55 && Y > 305 && Y < 355 && array[ 0][ 6] != 0)
   {
      counter_type = 7; counter.erase_counter( 30, 330, 40);
      action = ( action == true) ? false : true; array[ 0][ 6] = 0;
   }
   else if( X > 5 && X < 55 && Y > 355 && Y < 405 && array[ 0][ 7] != 0)
   {
      counter_type = 8; counter.erase_counter( 30, 380, 40);
      action = ( action == true) ? false : true; array[ 0][ 7] = 0;
   }
   else if( X > 55 && X < 105 && Y > 5 && Y < 55 && array[ 0][ 8] != 0)
   {
      counter_type = 9; counter.erase_counter( 80, 30, 40);
      action = ( action == true) ? false : true; array[ 0][ 8] = 0;
   }
   else if( X > 55 && X < 105 && Y > 55 && Y < 105 && array[ 0][ 9] != 0)
   {
      counter_type = 10; counter.erase_counter( 80, 80, 40);
      action = ( action == true) ? false : true; array[ 0][ 9] = 0;
   }
   else if( X > 55 && X < 105 && Y > 105 && Y < 155 && array[ 0][ 10] != 0)
   {
      counter_type = 11; counter.erase_counter( 80, 130, 40);
      action = ( action == true) ? false : true; array[ 0][ 10] = 0;
   }
   else if( X > 55 && X < 105 && Y > 155 && Y < 205 && array[ 0][ 11] != 0)
   {
      counter_type = 12; counter.erase_counter( 80, 180, 40);
      action = ( action == true) ? false : true; array[ 0][ 11] = 0;
   }
   else if( X > 55 && X < 105 && Y > 205 && Y < 255 && array[ 0][ 12] != 0)
   {
      counter_type = 13; counter.erase_counter( 80, 230, 40);
      action = ( action == true) ? false : true; array[ 0][ 12] = 0;
   }
   else if( X > 55 && X < 105 && Y > 255 && Y < 305 && array[ 0][ 13] != 0)
   {
      counter_type = 14; counter.erase_counter( 80, 280, 40);
      action = ( action == true) ? false : true; array[ 0][ 13] = 0;
   }
   else if( X > 55 && X < 105 && Y > 305 && Y < 355 && array[ 0][ 14] != 0)
   {
      counter_type = 15; counter.erase_counter( 80, 330, 40);
      action = ( action == true) ? false : true; array[ 0][ 14] = 0;
   }
   else if( X > 55 && X < 105 && Y > 355 && Y < 405 && array[ 0][ 15] != 0)
   {
      counter_type = 16; counter.erase_counter( 80, 380, 40);
      action = ( action == true) ? false : true;  array[ 0][ 15] = 0;
   }
}
//---------------------------------------------------------------------------
void TPlayer_moves::chose_field( int X, int Y, bool &action, TCounters counter,
                       short &counter_type,  short (*array)[ 16])
{
   if( X > 165 && X < 215 && Y > 5 && Y < 55 && array[ 1][ 0] == 0)
   {
      counter.draw_counter( counter_type, 165 + 25, 5 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 0] = counter_type;
   }
   if( X > 165 && X < 215 && Y > 55 && Y < 105 && array[ 1][ 1] == 0)
   {
      counter.draw_counter( counter_type, 165 + 25, 55 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 1] = counter_type;
   }
   if( X > 165 && X < 215 && Y > 105 && Y < 155 && array[ 1][ 2] == 0)
   {
      counter.draw_counter( counter_type, 165 + 25, 105 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 2] = counter_type;
   }
   if( X > 165 && X < 215 && Y > 155 && Y < 205 && array[ 1][ 3] == 0)
   {
      counter.draw_counter( counter_type, 165 + 25, 155 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 3] = counter_type;
   }//------
   if( X > 215 && X < 265 && Y > 5 && Y < 55 && array[ 1][ 4] == 0)
   {
      counter.draw_counter( counter_type, 215 + 25, 5 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 4] = counter_type;
   }
   if( X > 215 && X < 265 && Y > 55 && Y < 105 && array[ 1][ 5] == 0)
   {
      counter.draw_counter( counter_type, 215 + 25, 55 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 5] = counter_type;
   }
   if( X > 215 && X < 265 && Y > 105 && Y < 155 && array[ 1][ 6] == 0)
   {
      counter.draw_counter( counter_type, 215 + 25, 105 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 6] = counter_type;
   }
   if( X > 215 && X < 265 && Y > 155 && Y < 205 && array[ 1][ 7] == 0)
   {
      counter.draw_counter( counter_type, 215 + 25, 155 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 7] = counter_type;
   }//------
   if( X > 265 && X < 315 && Y > 5 && Y < 55 && array[ 1][ 8] == 0)
   {
      counter.draw_counter( counter_type, 265 + 25, 5 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 8] = counter_type;
   }
   if( X > 265 && X < 315 && Y > 55 && Y < 105 && array[ 1][ 9] == 0)
   {
      counter.draw_counter( counter_type, 265 + 25, 55 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 9] = counter_type;
   }
   if( X > 265 && X < 315 && Y > 105 && Y < 155 && array[ 1][ 10] == 0)
   {
      counter.draw_counter( counter_type, 265 + 25, 105 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 10] = counter_type;
   }
   if( X > 265 && X < 315 && Y > 155 && Y < 205 && array[ 1][ 11] == 0)
   {
      counter.draw_counter( counter_type, 265 + 25, 155 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 11] = counter_type;
   }//------
   if( X > 315 && X < 365 && Y > 5 && Y < 55 && array[ 1][ 12] == 0)
   {
      counter.draw_counter( counter_type, 315 + 25, 5 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 12] = counter_type;
   }
   if( X > 315 && X < 365 && Y > 55 && Y < 105 && array[ 1][ 13] == 0)
   {
      counter.draw_counter( counter_type, 315 + 25, 55 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 13] = counter_type;
   }
   if( X > 315 && X < 365 && Y > 105 && Y < 155 && array[ 1][ 14] == 0)
   {
      counter.draw_counter( counter_type, 315 + 25, 105 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 14] = counter_type;
   }
   if( X > 315 && X < 365 && Y > 155 && Y < 205 && array[ 1][ 15] == 0)
   {
      counter.draw_counter( counter_type, 315 + 25, 155 + 25, 40);
      action = ( action == true) ? false : true; array[ 1][ 15] = counter_type;
   }
}
//---------------------------------------------------------------------------
