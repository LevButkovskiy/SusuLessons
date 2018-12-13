object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1042#1099#1095#1080#1089#1083#1077#1085#1080#1077' '#1092#1091#1085#1082#1094#1080#1080
  ClientHeight = 218
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
    Top = 8
    Width = 152
    Height = 13
    Alignment = taCenter
    Caption = #1042#1099#1095#1080#1089#1083#1080#1090#1100' '#1074#1099#1088#1072#1078#1077#1085#1080#1103
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 120
    Top = 24
    Width = 228
    Height = 13
    Alignment = taCenter
    Caption = 'Z=((signX)'#8729'X+(signY)'#8729'Y)'#8729'sign(X+Y) '
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 120
    Top = 40
    Width = 204
    Height = 13
    Alignment = taCenter
    Caption = '       F=(signX+signY)'#8729'sign(X+Y)'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 300
    Top = 64
    Width = 153
    Height = 13
    Alignment = taCenter
    Caption = #1075#1076#1077' sign a = -1 '#1087#1088#1080' a<0'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 325
    Top = 80
    Width = 128
    Height = 13
    Alignment = taRightJustify
    Caption = 'sign a = 0 '#1087#1088#1080' a = 0'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 333
    Top = 96
    Width = 120
    Height = 13
    Alignment = taRightJustify
    Caption = 'sign a = 1 '#1087#1088#1080' a>0'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 8
    Top = 80
    Width = 60
    Height = 13
    Caption = ' '#1042#1077#1083#1077#1095#1080#1085#1072' X'
  end
  object Label8: TLabel
    Left = 11
    Top = 107
    Width = 57
    Height = 13
    Caption = #1042#1077#1083#1077#1095#1080#1085#1072' Y'
  end
  object OutZ: TLabel
    Left = 40
    Top = 144
    Width = 8
    Height = 13
    Alignment = taCenter
    Caption = '0'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label9: TLabel
    Left = 17
    Top = 144
    Width = 17
    Height = 13
    Alignment = taCenter
    Caption = 'Z='
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object InX: TEdit
    Left = 74
    Top = 77
    Width = 71
    Height = 21
    TabOrder = 0
  end
  object InY: TEdit
    Left = 74
    Top = 104
    Width = 71
    Height = 21
    TabOrder = 1
  end
  object But_z: TButton
    Left = 144
    Top = 176
    Width = 75
    Height = 25
    Caption = #1056#1072#1089#1089#1095#1077#1090' Z'
    TabOrder = 2
    OnClick = But_zClick
  end
  object But_f: TButton
    Left = 257
    Top = 176
    Width = 75
    Height = 25
    Caption = #1056#1072#1089#1089#1095#1077#1090' F'
    TabOrder = 3
    OnClick = But_fClickClick
  end
end
