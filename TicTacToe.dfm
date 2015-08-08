object Form1: TForm1
  Left = 403
  Top = 158
  Width = 870
  Height = 500
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnMouseDown = FormMouseDown
  OnPaint = FormPaint
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 776
    Top = 408
    Width = 32
    Height = 13
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 720
    Top = 408
    Width = 32
    Height = 13
    Caption = 'Label2'
  end
  object Label3: TLabel
    Left = 528
    Top = 16
    Width = 32
    Height = 13
    Caption = 'Label3'
  end
  object StringGrid1: TStringGrid
    Left = 688
    Top = 40
    Width = 129
    Height = 361
    ColCount = 3
    DefaultColWidth = 40
    DefaultRowHeight = 20
    RowCount = 17
    TabOrder = 0
    RowHeights = (
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20
      20)
  end
  object Button1: TButton
    Left = 256
    Top = 312
    Width = 75
    Height = 25
    Caption = 'New Game'
    TabOrder = 1
    OnClick = Button1Click
  end
  object StringGrid2: TStringGrid
    Left = 112
    Top = 384
    Width = 561
    Height = 89
    ColCount = 18
    DefaultColWidth = 30
    DefaultRowHeight = 16
    TabOrder = 2
  end
  object GroupBox1: TGroupBox
    Left = 464
    Top = 248
    Width = 169
    Height = 113
    Caption = 'Levels of Play'
    TabOrder = 3
    object RadioButton1: TRadioButton
      Left = 16
      Top = 16
      Width = 113
      Height = 17
      Caption = 'Random'
      Checked = True
      TabOrder = 0
      TabStop = True
    end
    object RadioButton2: TRadioButton
      Left = 16
      Top = 48
      Width = 113
      Height = 17
      Caption = 'Novice'
      TabOrder = 1
    end
    object RadioButton3: TRadioButton
      Left = 16
      Top = 80
      Width = 113
      Height = 17
      Caption = 'MinMax-2d'
      TabOrder = 2
    end
  end
  object Button2: TButton
    Left = 472
    Top = 112
    Width = 73
    Height = 25
    Caption = 'Rand vs Nov'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 472
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 5
    Text = '100'
  end
  object StringGrid3: TStringGrid
    Left = 472
    Top = 152
    Width = 97
    Height = 89
    ColCount = 2
    DefaultColWidth = 45
    DefaultRowHeight = 20
    RowCount = 4
    TabOrder = 6
  end
  object ScrollBar1: TScrollBar
    Left = 744
    Top = 24
    Width = 121
    Height = 16
    PageSize = 0
    TabOrder = 7
  end
end
