//---------------------------------------------------------------------------
#include <vcl.h>
#include "math.h"
#pragma hdrstop
#include "TTools.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
short TTools::search( short ( *array)[ 16], short value)
{
   short i;
   for( i = 0; (i < 16) && ( array[ 1][ i] != value); i ++);
   return i;
}
//---------------------------------------------------------------------------
bool TTools::check_if_win( short ( *features)[ 17], short ( *array)[ 16], short g)
{                                                
   bool test;
   int i;
   test = false; // Veriable is true, if sb has 4 figures in a roow,column or in the diameters.
   for( int j = 0; j < 4; j ++)
   {// Rows checking
      for(i = 0; i <= 3; i ++) test |= ((features[ j][ array[ 1][ i]] == g) &&
      (features[ j][ array[ 1][ i + 4]] == g) && (features[ j][ array[ 1][ i + 8]] == g)
      && (features[ j][ array[ 1][ i + 12]] == g));
    // Columns checking
      for(i = 0; i <= 12; i += 4) test |= ((features[ j][ array[ 1][ i]] == g) &&
      (features[ j][ array[ 1][ i + 1]] == g) && (features[ j][ array[ 1][ i + 2]] == g)
      && (features[ j][ array[ 1][ i + 3]] == g));
    // Diameter checking 0-5-10-15
      test |= ((features[ j][ array[ 1][ 0]] == g) && (features[ j][ array[ 1][ 5]] == g)
      && (features[ j][ array[ 1][ 10]] == g) && (features[ j][ array[ 1][ 15]] == g));
    // Diameter checking  3-6-9-12
      test |= ((features[ j][ array[ 1][ 3]] == g) && (features[ j][ array[ 1][ 6]] == g)
      && (features[ j][ array[ 1][ 9]] == g) && (features[ j][ array[ 1][ 12]] == g)); //*/
   }
   if(test) return true;
   else return false;
}
//---------------------------------------------------------------------------
bool TTools::check_if_win2( short ( *features)[ 17], short ( *array)[ 16], short g ,short counter)
{
   bool test;
   int i;
   int k = 0;
   test = false; // Veriable is true, if sb has 4 figures in a roow,column or in the diameters.
   do{
      if( array[ 1][ k] == 0)
      {
         array [ 1][ k] = counter;
         for( int j = 0; j < 4; j ++)
         {// Rows checking
            for(i = 0; i <= 3; i ++) test |= ((features[ j][ array[ 1][ i]] == g) &&
            (features[ j][ array[ 1][ i + 4]] == g) && (features[ j][ array[ 1][ i + 8]] == g)
            && (features[ j][ array[ 1][ i + 12]] == g));
          // Columns checking
            for(i = 0; i <= 12; i += 4) test |= ((features[ j][ array[ 1][ i]] == g) &&
            (features[ j][ array[ 1][ i + 1]] == g) && (features[ j][ array[ 1][ i + 2]] == g)
            && (features[ j][ array[ 1][ i + 3]] == g));
          // Diameter checking 0-5-10-15
            test |= ((features[ j][ array[ 1][ 0]] == g) && (features[ j][ array[ 1][ 5]] == g)
            && (features[ j][ array[ 1][ 10]] == g) && (features[ j][ array[ 1][ 15]] == g));
          // Diameter checking  3-6-9-12
            test |= ((features[ j][ array[ 1][ 3]] == g) && (features[ j][ array[ 1][ 6]] == g)
            && (features[ j][ array[ 1][ 9]] == g) && (features[ j][ array[ 1][ 12]] == g)); //*/
         }
         array[ 1][ k] = 0;
         k += 1;
      }else k += 1;
   }while( k < 16);
   if(test) return true;
   else return false;
}
//---------------------------------------------------------------------------
short TTools::evaluation( short ( *features)[ 17], short ( *tab)[ 16])
{
   short value = 0;
   short nr;
   short sum;
   for( int j = 0; j <= 12; j += 4)
   {
      nr = 0;
      for( int i = 0; i <= 3; i ++)
      if( tab[ 1][ i + j] != 0) nr += 1;
      if( nr == 3)
      {
         for( int k = 0; k <= 3; k ++)
         {
            sum = 0;
            for( int i = 0; i <= 3; i ++)
               sum += features[ k][ tab[ 1][ i + j]];
            if( sum - 9 == 0 || sum - 9 == 3) value += 1;
         }
      }
   }
   for( int j = 0; j <= 3; j ++)
   {
      nr = 0;
      for( int i = 0; i <= 12; i += 4)
      if( tab[ 1][ i + j] != 0) nr += 1;
      if( nr == 3)
      {
         for( int k = 0; k <= 3; k ++)
         {
            sum = 0;
            for( int i = 0; i <= 12; i += 4)
               sum += features[ k][ tab[ 1][ i + j]];
            if( sum - 9 == 0 || sum - 9 == 3) value += 1;
         }
      }
   }
   nr = 0;
   for( int i = 0; i <= 15; i += 5)
      if( tab[ 1][ i] != 0) nr += 1;
   if( nr == 3)
   {
      for( int k = 0; k <= 3; k ++)
      {
         sum = 0;
         for( int i = 0; i <= 15; i += 5)
            sum += features[ k][ tab[ 1][ i]];
         if( sum - 9 == 0 || sum - 9 == 3) value += 1;
      }
   }
   nr = 0;
   for( int i = 3; i <= 12; i += 3)
      if( tab[ 1][ i] != 0) nr += 1;
   if( nr == 3)
   {
      for( int k = 0; k <= 3; k ++)
      {
         sum = 0;
         for( int i = 3; i <= 12; i += 3)
            sum += features[ k][ tab[ 1][ i]];
         if( sum - 9 == 0 || sum - 9 == 3) value += 1;
      }
   }
   return value;
}
//---------------------------------------------------------------------------
