//---------------------------------------------------------------------------

#ifndef TicTacToeH
#define TicTacToeH
#define DIM1 2
#define DIM2 16
#define DIM3 4
#define DIM4 17
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
friend class TCounters;
__published:	// IDE-managed Components
        TStringGrid *StringGrid1;
        TButton *Button1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TStringGrid *StringGrid2;
        TGroupBox *GroupBox1;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TButton *Button2;
        TEdit *Edit1;
        TStringGrid *StringGrid3;
        TRadioButton *RadioButton3;
        TScrollBar *ScrollBar1;
        void __fastcall FormPaint(TObject *Sender);
        void __fastcall FormMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations

public:		// User declarations
        short array[ DIM1][ DIM2];
        //short features[ DIM3][ DIM4];
        short counter_type;
        bool action;
        short given_counter;
        short comp_move;
        bool stop;
        void initialize_array();
        //void comp_move_field( short nr, short counter_type, TCounters counter);
        //void comp_move_counter( short nr, short counter_type, TCounters counter);
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
