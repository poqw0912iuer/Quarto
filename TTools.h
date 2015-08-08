//---------------------------------------------------------------------------
#ifndef TToolsH
#define TToolsH
//---------------------------------------------------------------------------
class TTools
{
public:
   short search( short (*array)[ 16], short value);
   bool check_if_win( short ( *features)[ 17], short ( *tab)[ 16], short g);
   bool check_if_win2( short ( *features)[ 17], short ( *tab)[ 16], short g, short counter);
   short evaluation( short ( *features)[ 17], short ( *tab)[ 16]);
};
//---------------------------------------------------------------------------
#endif

