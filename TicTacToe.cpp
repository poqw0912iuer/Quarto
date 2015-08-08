//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "TicTacToe.h"
#include "Counters.h"
#include "TPlayer_moves.h"
#include "TCPU.h"
#include "TTools.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
short features[ 4][ 17] = {9,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,   // shape  rectangle - 1
                           9,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,   // size   big - 1
                           9,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,   // color  blue - 1
                           9,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,}; // whole  without whole - 1  //*/
TCPU CPU;
TPlayer_moves Player;
TTools T;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
   initialize_array();
   StringGrid3 -> Cells[ 0][ 1] = " random";
   StringGrid3 -> Cells[ 0][ 2] = " novice";
   StringGrid3 -> Cells[ 0][ 3] = " remis";
   StringGrid3 -> Cells[ 1][ 0] = " winings";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormPaint(TObject *Sender)
{
   for( int i = 0; i < 17; i ++) //
      for( int j = 0; j < 4; j ++) //
         StringGrid2 -> Cells[ i + 1][ j + 1] = features[ j][ i];   //
   TCounters counter( Canvas);
   counter.draw_grid( 110, 80, 1, 1, 50);
   counter.draw_grid( 5, 5, 2, 8, 50);
   counter.draw_grid( 165, 5, 4, 4, 50);
   for( int i = 0; i < 16; i ++)
   {
      if( array[ 1][ i] != 0)
         CPU.comp_move_field( i, array[ 1][ i], counter);
      if( i >= 8 && array[ 0][ i] != 0)
      counter.draw_counter( i + 1, 30 + 50, 30 + 50 * ( i - 8), 40);
      if( i < 8 && array[ 0][ i] != 0)
      counter.draw_counter( i + 1, 30, 30 + 50 * i, 40);
   }
   if( given_counter != 0)
      counter.draw_counter( given_counter, 110 + 25, 80 + 25, 40);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormMouseDown(TObject *Sender, TMouseButton Button,
                                      TShiftState Shift, int X, int Y)
{
   TCounters counter( Canvas);
   if(  stop == false)
   {
      if( action == false && X > 5 && X < 105 && Y > 5 && Y < 405)
      {
         Player.chose_counter( X, Y, action, counter, counter_type, array);
         //---------------------------
         if( action == true)
         {
            if( RadioButton1 -> Checked == true)
               CPU.Random_field( array, counter_type, comp_move);
            else if( RadioButton2 -> Checked == true)
               CPU.Novice_field( features, array, counter_type, comp_move);
            else if( RadioButton3 -> Checked == true)
            {
               CPU.MinMax_field( features, array, counter_type, comp_move, 'O', 2);
               array[1][ comp_move] = counter_type;
               Label1 -> Caption = comp_move;
            }
            CPU.comp_move_field( comp_move, counter_type, counter);
            Label2 -> Caption = T.evaluation( features, array);/////////
            if( T.check_if_win( features, array, 1) == true || T.check_if_win( features, array, 0) == true)
            {
               MessageBox( NULL, "Loser!", " ", MB_OK);
               stop = true;
               goto end;
            }
            //---------------------------
            if( T.search( array, 0) < 16) stop = false;
            else stop = true;
            if( stop == false)
            {
               if( RadioButton1 -> Checked == true)
                  CPU.Random_counter( array, comp_move, counter_type, given_counter);
               else if( RadioButton2 -> Checked == true)
                  CPU.Novice_counter( features, array, comp_move, counter_type, given_counter);
               else if( RadioButton3 -> Checked == true)
               {  CPU.Novice_counter( features, array, comp_move, counter_type, given_counter);
                 /* int temp_move, i, m, mmx;
                  mmx = -10;
                  for(i = 0; i < 16; i++)
                  if(array[0][i] != 0)
                  {
                     counter_type = array[0][i];
                     array[0][i] = 0;//counter_type;
                     m = CPU.MinMax_counter( features, array, comp_move, counter_type, given_counter, 'O', 2);
                     array[0][i] = i + 1;
                     if(m > mmx)
                     {
                        mmx = m; temp_move = i;
                     }
                  }
                  comp_move = temp_move;
                  counter_type = array[0][comp_move];
                  given_counter = counter_type;
                  array[ 0][ comp_move] = 0; */
               }
               CPU.comp_move_counter( comp_move, counter_type, counter);
            }
         }
      }
      else if( action == true && X > 165 && X < 365 && Y > 5 && Y < 205)
      {
         Player.chose_field( X, Y, action, counter, counter_type, array);
         Label2 -> Caption = T.evaluation( features, array);////////////
         if( T.check_if_win( features, array, 1) == true || T.check_if_win( features, array, 0) == true)
         {
            MessageBox( NULL, "Winner!", " ", MB_OK);
            stop = true;
            goto end;
         }
         if( T.search( array, 0) < 16) stop = false;
         else stop = true;
      }
      for( int i = 0; i < 2; i++)
         for( int j = 0; j < 16; j ++)
            StringGrid1 -> Cells[ i + 1][ j + 1] = array[ i][ j];
   }
   end:
   if( stop == true)
   {
      given_counter = 0;
      counter.erase_counter( 110 + 25, 80 + 25, 40);
      MessageBox( NULL, "The end of the game!", " ", MB_OK);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   TCounters counter( Canvas);
   counter.draw_grid( 110, 80, 1, 1, 50);
   counter.draw_grid( 165, 5, 4, 4, 50);
   initialize_array();
   for( int i = 0; i < 16; i ++)
   {
      if( i >= 8)
      counter.draw_counter( i + 1, 30 + 50, 30 + 50 * ( i - 8), 40);
      else
      counter.draw_counter( i + 1, 30, 30 + 50 * i, 40);
   }
   if( random( 2) == 0)
   {
      MessageBox( NULL, "CPU starts the game!", " ", MB_OK);
      action = true;
      CPU.Random_counter( array, comp_move, counter_type, given_counter);
      CPU.comp_move_counter( comp_move, counter_type, counter);
   }
   else
   {
      MessageBox( NULL, "You start the game!", " ", MB_OK);
      action = false;
   }
   stop = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
   short rand = 0;
   short nov = 0;
   short remis = 0;
   int limit = StrToInt(Edit1 -> Text);
   for( int i = 0; i < limit; i ++)
   {
      stop = false;
      initialize_array();
      if( random( 2) == 0)
         do{
            CPU.Novice_counter( features, array, comp_move, counter_type, given_counter);
            //CPU.Random_field( array, counter_type, comp_move);
            CPU.MinMax_field( features, array, counter_type, comp_move, 'O', 2);
               array[1][ comp_move] = counter_type;
            ////////////////
            if( T.check_if_win( features, array, 1) == true || T.check_if_win( features, array, 0) == true)
            {
               rand += 1;
               goto end;
            }
            if( T.search( array, 0) >= 16) stop = true;
            //CPU.Random_counter( array, comp_move, counter_type, given_counter);
               CPU.Novice_counter( features, array, comp_move, counter_type, given_counter);
            //////////////
            CPU.Novice_field( features, array, counter_type, comp_move);
            if( T.check_if_win( features, array, 1) == true || T.check_if_win( features, array, 0) == true)
            {
               nov += 1;
               goto end;
            }
            if( T.search( array, 0) >= 16) stop = true;
         }
         while( !stop );
      else
         do{
            //CPU.Random_counter( array, comp_move, counter_type, given_counter);
               CPU.Novice_counter( features, array, comp_move, counter_type, given_counter);
            /////////
            CPU.Novice_field( features, array, counter_type, comp_move);
            if( T.check_if_win( features, array, 1) == true || T.check_if_win( features, array, 0) == true)
            {
               nov += 1;
               goto end;
            }
            if( T.search( array, 0) >= 16) stop = true;
            CPU.Novice_counter( features, array, comp_move, counter_type, given_counter);
            //CPU.Random_field( array, counter_type, comp_move);
            CPU.MinMax_field( features, array, counter_type, comp_move, 'O', 2);
               array[1][ comp_move] = counter_type;
            /////
            if( T.check_if_win( features, array, 1) == true || T.check_if_win( features, array, 0) == true)
            {
               rand += 1;
               goto end;
            }
            if( T.search( array, 0) >= 16) stop = true;
         }               
         while( !stop);
      end:
   }
   StringGrid3 -> Cells[ 1][ 1] = rand;
   StringGrid3 -> Cells[ 1][ 2] = nov;
   StringGrid3 -> Cells[ 1][ 3] = limit - rand - nov;
}
//---------------------------------------------------------------------------
void TForm1::initialize_array()
{
   for( int i = 0; i < 2; i++)
      for( int j = 0; j < 16; j ++)
      {
         if( i == 0) array[ i][ j] = j + 1;
         else array[ i][ j] = 0;
         StringGrid1 -> Cells[ i + 1][ j + 1] = array[ i][ j];
      }
}
//---------------------------------------------------------------------------
